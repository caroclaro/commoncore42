/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyelmo-l <cyelmo-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 18:25:56 by cyelmo-l          #+#    #+#             */
/*   Updated: 2026/10/15 13:15:43 by cyelmo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//rellena un total de n carac c en s
void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*e;

	i = 0;
	e = s;
	while (i < n)
	{
		e[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
// int main(void)
// {
// 	char jajaj[] = "AAAAAAAAAAAAAAAA";
// 	ft_memset(jajaj, 'P', 3);
// 	printf("%s", jajaj);
// }