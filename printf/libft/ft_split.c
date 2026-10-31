/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyelmo-l <cyelmo-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 12:57:29 by cyelmo-l          #+#    #+#             */
/*   Updated: 2026/10/16 11:25:39 by cyelmo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//calcula cuantas palabras hay en la s separadas por c
static int	words_calculator(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	if (s[i] != c && s[i] != '\0')
		words++;
	while (s[i] != 0)
	{
		if ((s[i] == c) && (s[i + 1] != c) && (s[i + 1] != 0))
			words++;
		i++;
	}
	return (words);
}

//calcula cuantas letras hay en la palabra de int b
//recorriendolo como hace words calculator
static int	word_counter(char const *s, char c, int b)
{
	int	i;
	int	letters;
	int	words;

	i = 0;
	words = 0;
	letters = 0;
	if (s[i] != c && s[i] != '\0')
		words++;
	while (s[i] != 0)
	{
		if ((words == b) && ((s[i] != c)))
		{
			letters++;
			if ((words == b) && ((s[i + 1] == c) || (s[i + 1] == 0)))
				return (letters);
		}
		else if ((s[i] == c) && (s[i + 1] != c) && (s[i + 1] != 0))
			words++;
		i++;
	}
	return (0);
}

//recibe la cadena s, el separador c y la posicion del array en el que
//se encuentra, recorre hasta coincidir con la posicion y devuelve
//el indice de la palabra q queremos en esa posicion 
static int	init_counter(char const *s, char c, int pos)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	if (s[i] != c && s[i] != '\0')
		words++;
	while (s[i] != 0)
	{
		if ((words == pos) && ((s[i] != c) || (s[i + 1] == 0)))
			return (i);
		else if ((s[i] == c) && (s[i + 1] != c) && (s[i + 1] != 0))
			words++;
		i++;
	}
	return (0);
}

static char	**free_j(char **final, int j)
{
	while (j > 0)
		free(final[--j]);
	free(final);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**final;
	int		i;
	int		j;
	int		k;

	if (!s)
		return (NULL);
	i = (words_calculator(s, c));
	j = 0;
	final = malloc((i + 1) * sizeof(char *));
	if (!final)
		return (NULL);
	while (i > j)
	{
		final[j] = malloc(word_counter(s, c, j + 1) + 1);
		if (!final[j])
			return ((free_j(final, j)));
		k = init_counter(s, c, j + 1);
		ft_strlcpy(final[j], &s[k], (size_t)word_counter(s, c, j + 1) + 1);
		j++;
	}
	final[j] = NULL;
	return (final);
}
// int main(void)
// {
//     char    **hol;
//     int     i;
//     hol = ft_split("   Hola                te vou da mundo", ' ');
//     i = 0;
//     while (hol && hol[i])
//     {
//         printf("hol[%d] = %s\n", i, hol[i]);
//         free(hol[i]);
//         i++;
//     }
//     free(hol);
//     return (0);
// }
