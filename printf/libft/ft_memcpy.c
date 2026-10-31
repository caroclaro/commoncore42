/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyelmo-l <cyelmo-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 15:09:46 by cyelmo-l          #+#    #+#             */
/*   Updated: 2026/10/15 13:13:18 by cyelmo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//copia en el principio de dest, n caracteres de src
void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	size_t				i;
	unsigned char		*e;
	unsigned char		*o;

	i = 0;
	if (!dest && !src)
		return (0);
	e = (unsigned char *)dest;
	o = (unsigned char *)src;
	while (count > i)
	{
		e[i] = o[i];
		i++;
	}
	return (dest);
}
// int main(void)
// {
// 	char jajaj[] = "src";
//     char e[] = "destino";
// 	ft_memcpy(e, jajaj, 3);
// 	printf("%s", e);
// }
