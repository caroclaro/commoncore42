/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyelmo-l <cyelmo-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 13:06:02 by cyelmo-l          #+#    #+#             */
/*   Updated: 2026/10/16 11:26:41 by cyelmo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*e;

	i = 0;
	e = s;
	while (i < n)
	{
		e[i] = 0;
		i++;
	}
}
// int main(void)
// {
// 	int jajaj[] = {1,2,3,4,5,6,7,8};
// 	ft_bzero(jajaj, 3);
// 	printf("%d", jajaj[3]);
// }