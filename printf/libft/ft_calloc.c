/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyelmo-l <cyelmo-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 11:57:44 by cyelmo-l          #+#    #+#             */
/*   Updated: 2026/10/16 14:30:34 by cyelmo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*cuerda;

	if (size != 0 && count > ((size_t)-1 / size))
		return (NULL);
	cuerda = malloc(count * size);
	if (!cuerda)
		return (NULL);
	if (count == 0 || size == 0)
		return (cuerda);
	ft_bzero(cuerda, count * size);
	return ((void *)cuerda);
}
// int	main(void)
// {
// 	ft_calloc(0,3);
// }