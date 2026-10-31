/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   charaux.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyelmo-l <cyelmo-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 11:21:11 by cyelmo-l          #+#    #+#             */
/*   Updated: 2026/10/29 16:29:39 by cyelmo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libraries/ft_printf.h"

//putchar but it returns 1 as it only writes 1 char

int	ft_putcharcont(char c)
{
	return (write(1, &c, 1));
}
