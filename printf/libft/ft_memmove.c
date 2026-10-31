/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyelmo-l <cyelmo-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 15:35:18 by cyelmo-l          #+#    #+#             */
/*   Updated: 2026/10/15 13:14:24 by cyelmo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//mismo qe memcpy solo q comprueba si se overlapean
void	*ft_memmove(void *dest, void *src, size_t count)
{
	unsigned char		*de;
	unsigned char		*so;

	if (!dest && !src)
		return (NULL);
	de = (unsigned char *)dest;
	so = (unsigned char *)src;
	if (de >= so)
	{
		while (count > 0)
		{
			de[count - 1] = so[count - 1];
			count--;
		}
	}
	else
		ft_memcpy(dest, src, count);
	return (dest);
}

// int main(void)
// {
//     char de[] = " iiiiii";
// 	char sour[] = "abad";
// 	ft_memmove(de, sour, 3);
// 	printf("%s", de);
// }

// int main(void)
// {
// 	char sour[] = "123456789";
// 	//ft_memmove(sour +2, sour, 3);
// 	//printf("Resultado esperado 	= 121236789\n");
// 	printf("Resmio	= %s", (char *)ft_memmove(sour +2, sour, 3));
// 	//printf("Resultado esperado 	= %s",sour);

// }