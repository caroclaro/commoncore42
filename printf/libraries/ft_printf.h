/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyelmo-l <cyelmo-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 13:31:33 by cyelmo-l          #+#    #+#             */
/*   Updated: 2026/10/29 16:08:31 by cyelmo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>
# include <stdint.h>

int	ft_printf(char const *c, ...);
int	sorter(char c, va_list args);
int	ft_putnbrcont(int n, int tol);
int	ft_auxstr(va_list args);
int	ft_putstrcont(char *s);
int	ft_puthex(uintptr_t n, char *str, int cont);
int	ft_putunsint(unsigned int n, int cont);
int	ft_putcharcont(char c);
int	ft_auxptr(va_list args);

#endif