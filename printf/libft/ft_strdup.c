/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyelmo-l <cyelmo-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 13:34:58 by cyelmo-l          #+#    #+#             */
/*   Updated: 2026/10/15 11:56:43 by cyelmo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*cadena;

	i = 0;
	cadena = malloc(ft_strlen(s1) + 1);
	if (!cadena)
		return (NULL);
	while (s1[i] != 0)
	{
		cadena[i] = s1[i];
		i++;
	}
	cadena[i] = '\0';
	return (cadena);
}

// int	main(void)
// {
// 	char *hola = ft_strdup("HOLA BUENAS");
// 	printf("%s", hola);
// 	free(hola);
// }
