/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyelmo-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 13:05:53 by cyelmo-l          #+#    #+#             */
/*   Updated: 2026/09/24 16:29:58 by cyelmo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		cont++;
	}
	return (cont);
}

char	*ft_strdup(char *src)
{
	char	*copia;
	int		i;

	i = 0;
	copia = malloc(ft_strlen(src) + 1);
	if (copia == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		copia[i] = src[i];
		i++;
	}
	copia[i] = '\0';
	return (copia);
}
	// int	main(void)
	// {
	// char	*cadena;
	// cadena = ft_strdup("osaeota");
	// printf("%s", cadena );
	// }
