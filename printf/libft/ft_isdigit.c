/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyelmo-l <cyelmo-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 16:39:11 by cyelmo-l          #+#    #+#             */
/*   Updated: 2026/10/15 12:23:38 by cyelmo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	return (0);
}

// int	main(void)
// {
// 	printf("%d", ft_isdigit('A'));
// 	printf("%d", ft_isdigit('3'));
// 	printf("%d", ft_isdigit('L'));
// 	printf("%d", ft_isdigit('0'));
// }