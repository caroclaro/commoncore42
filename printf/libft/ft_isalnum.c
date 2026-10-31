/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyelmo-l <cyelmo-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 16:55:03 by cyelmo-l          #+#    #+#             */
/*   Updated: 2026/10/15 12:22:32 by cyelmo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c))
		return (1);
	else if (ft_isdigit(c))
		return (1);
	return (0);
}

// int	main(void)
// {
// 	printf("%d", ft_isalnum('A'));
// 	printf("%d", ft_isalnum('z'));
// 	printf("%d", ft_isalnum(':'));
// 	printf("%d", ft_isalnum('4'));
// }
