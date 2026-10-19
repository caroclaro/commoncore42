/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyelmo-l <cyelmo-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 12:58:14 by cyelmo-l          #+#    #+#             */
/*   Updated: 2026/10/15 13:09:57 by cyelmo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//busca la primera aparición de c durante n caracteres en s
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*cadena;

	i = 0;
	cadena = (unsigned char *)s;
	while (i < n)
	{
		if (cadena[i] == (unsigned char)c)
			return (&cadena[i]);
		i++;
	}
	return (0);
}

//int main (void)
//{
//	char de[] = "iiiiaiif";
//	printf("%s",(unsigned char *)ft_memchr(de, 'a', 6));
//}
