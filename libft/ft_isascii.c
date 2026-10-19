/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyelmo-l <cyelmo-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 17:05:00 by cyelmo-l          #+#    #+#             */
/*   Updated: 2026/10/15 12:23:22 by cyelmo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if ((c >= 0) && (c <= 127))
		return (1);
	return (0);
}

// int	main(void)
// {
//     char hola[] = "a3ñ  ";
// 	printf("%d", ft_isascii(hola[0]));
// 	printf("%d", ft_isascii(hola[1]));
// 	printf("%d", ft_isascii(hola[4]));
// 	printf("%d", ft_isascii(hola[5]));
// }