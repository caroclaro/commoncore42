/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyelmo-l <cyelmo-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 14:50:14 by cyelmo-l          #+#    #+#             */
/*   Updated: 2026/10/15 12:23:14 by cyelmo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int a)
{
	if (((a >= 65) && (a <= 90)) || ((a >= 97) && (a <= 122)))
		return (1);
	return (0);
}

// int	main(void)
// {
// 	printf("%d", ft_isalpha('A'));
// 	printf("%d", ft_isalpha('a'));
// 	printf("%d", ft_isalpha('L'));
// 	printf("%d", ft_isalpha('4'));
// }