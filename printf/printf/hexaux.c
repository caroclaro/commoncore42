/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hexaux.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyelmo-l <cyelmo-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 12:03:03 by cyelmo-l          #+#    #+#             */
/*   Updated: 2026/10/29 13:33:20 by cyelmo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libraries/ft_printf.h"

//ft_puthex, using uintptr_t so its valid for printing pointers (%p)
// since is a bigger varieable it also works for nsigned ints

int	ft_puthex(uintptr_t n, char *str, int cont)
{
	int	i;

	i = 0;
	if ((n == 0) && (cont == 0))
	{
		write(1, "0", 1);
		return (1);
	}
	if (n >= 16)
	{
		i = ft_puthex((n / 16), str, 1);
	}
	write(1, &str[n % 16], 1);
	return (i + 1);
}
