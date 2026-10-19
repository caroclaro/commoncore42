/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyelmo-l <cyelmo-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 14:26:19 by cyelmo-l          #+#    #+#             */
/*   Updated: 2026/10/15 15:47:24 by cyelmo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	funwhile(char const *s, char *cadena, unsigned int p, size_t l)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	while (s[i] != 0)
	{
		if (i == (size_t)p)
		{
			while ((j < l) && (s[i] != 0))
			{
				cadena[j] = s[i];
				i++;
				j++;
			}
		}
		if (s[i] != 0)
			i++;
	}
	return (j);
}

//extrae una subcadena de s qiie vaya de start a len
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*cadena;
	size_t		j;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > (ft_strlen(s) - start))
		cadena = malloc(ft_strlen(s) - start + 1);
	else
		cadena = malloc(len + 1);
	if (!cadena)
		return (NULL);
	j = funwhile(s, cadena, start, len);
	cadena[j] = '\0';
	return (cadena);
}
// int	main(void)
// {
// 	char *hola = ft_substr("hola" , 0, 10);
// 	printf("%s", hola);
// }
