/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ptraux.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyelmo-l <cyelmo-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 12:55:41 by cyelmo-l          #+#    #+#             */
/*   Updated: 2026/10/29 13:28:39 by cyelmo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libraries/ft_printf.h"

int	ft_auxptr(va_list args)
{
	uintptr_t	ptr;
	int			cont;

	ptr = (uintptr_t)va_arg(args, void *);
	if (!ptr)
	{
		ft_putstr_fd("(nil)", 1);
		return (5);
	}
	write(1, "0x", 2);
	cont = ft_puthex(ptr, "0123456789abcdef", 0);
	return (cont + 2);
}
