/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyelmo-l <cyelmo-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 17:40:17 by cyelmo-l          #+#    #+#             */
/*   Updated: 2026/10/15 15:32:07 by cyelmo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// copia en dest, src limitando el size
size_t	ft_strlcpy(char *dest, const char *source, size_t size)
{
	size_t	i;

	i = 0;
	while ((size > 0) && (i < (size - 1)) && (source[i] != '\0'))
	{
		dest[i] = source[i];
		i++;
	}
	if (size > 0)
		dest[i] = '\0';
	return (ft_strlen(source));
}

// int main(void)
// {
//     char de[20] = "eogjwddwaj";
// 	char sour[] = "wawd";
// 	ft_strlcpy(de, sour, 7);
// 	printf("%s", de);
// }
