/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyelmo-l <cyelmo-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 18:14:13 by cyelmo-l          #+#    #+#             */
/*   Updated: 2026/10/15 15:27:03 by cyelmo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//concatena src al final de dest mientras quepa en size
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len;

	len = ft_strlen(dst);
	i = 0;
	j = 0;
	if ((size == 0) || (len > size))
		return (ft_strlen(src) + size);
	while (dst[i] != 0)
		i++;
	while ((src[j] != 0) && (i < (size - 1)))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = 0;
	return (len + ft_strlen(src));
}

// int main(void)
// {
//     char de[10] = "a";
// 	char sour[] = "lorem ipsum dolor sit amet";
// 	printf("%zu", ft_strlcat(de, sour, 5));
// 	printf("%s", de);
// }
