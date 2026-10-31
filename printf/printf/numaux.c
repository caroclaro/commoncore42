/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numaux.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyelmo-l <cyelmo-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 11:22:19 by cyelmo-l          #+#    #+#             */
/*   Updated: 2026/10/29 12:26:26 by cyelmo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libraries/ft_printf.h"

//putnbr but it counts and return the number of written ints
//ft_putunsint just putnbrcont but with unsigned int

int	ft_putnbrcont(int n, int tol)
{
	char	c;

	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n = n * -1;
		tol ++;
	}
	if (n > 9)
	{
		tol = ft_putnbrcont(n / 10, tol);
	}
	c = (n % 10) + '0';
	write(1, &c, 1);
	tol++;
	return (tol);
}

int	ft_putunsint(unsigned int n, int cont)
{
	char	c;

	if (n > 9)
	{
		cont = ft_putunsint((n / 10), cont);
	}
	c = (n % 10) + '0';
	write(1, &c, 1);
	cont++;
	return (cont);
}
