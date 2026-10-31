/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyelmo-l <cyelmo-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 17:15:48 by cyelmo-l          #+#    #+#             */
/*   Updated: 2026/10/15 12:24:49 by cyelmo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if ((c >= 32) && (c <= 126))
		return (1);
	return (0);
}

// int	main(void)
// {
//     char hola[] = "aéiñ";
// 	printf("%d", ft_isprint(hola[0]));
// 	printf("%d", ft_isprint(hola[1]));
// 	printf("%d", ft_isprint(hola[2]));
// 	printf("%d", ft_isprint(hola[3]));
// }
