/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyelmo-l <cyelmo-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 15:24:55 by cyelmo-l          #+#    #+#             */
/*   Updated: 2026/10/30 13:37:09 by cyelmo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libraries/ft_printf.h"

int	sorter(char c, va_list args)
{
	int	cont;

	cont = 0;
	if (c == 'c')
		cont = ft_putcharcont(va_arg(args, int));
	if (c == 's')
		cont = ft_auxstr(args);
	if (c == 'p')
		cont = ft_auxptr(args);
	if ((c == 'd') || (c == 'i'))
		cont = ft_putnbrcont(va_arg(args, int), 0);
	if (c == 'u')
		cont = ft_putunsint(va_arg(args, unsigned int), 0);
	if (c == 'x')
		cont = ft_puthex(va_arg(args, unsigned int), "0123456789abcdef", 0);
	if (c == 'X')
		cont = ft_puthex(va_arg(args, unsigned int), "0123456789ABCDEF", 0);
	if (c == '%')
		cont = ft_putcharcont('%');
	return (cont);
}

int	ft_printf(char const *c, ...)
{
	va_list	args;
	int		i;
	int		cont;

	i = 0;
	cont = 0;
	va_start(args, c);
	while (c && c[i])
	{
		if ((c[i] == '%') && (c[i + 1] != 0))
		{
			i++;
			cont = cont + sorter(c[i], args);
			cont--;
		}
		else
			write(1, (const void *)&c[i], 1);
		i++;
		cont++;
	}
	va_end(args);
	return (cont);
}

// int main(void)
// {
// 	char *c = "fojowfw";
// 	// printf("%d\n",printf(" funcciona? %p ",&c));
// 	// printf("\n");
// 	// // printf("%d\n",ft_printf(" funcciona? %s \n"," s s d ds d "));
// 	// // printf("%d\n",ft_printf(" funcciona? %x \n",1234567));
// 	// // printf("%d\n",ft_printf(" funcciona? %X \n",1234567));
// 	// // printf("%d\n",ft_printf(" funcciona? %i \n",-12345));
// 	// // printf("%d\n",ft_printf(" funcciona? %i \n",12345));
// 	// printf("%d\n",ft_printf(" funcciona? %u \n",123456));
// 	// printf("%d\n",ft_printf(" funcciona? %d \n",-123456));
// 	// printf("%d\n",ft_printf(" funcciona? %d \n",123456));
// 	// printf("%d\n",ft_printf(" funcciona? %%\n"));
// }

//  cc ft_printf.c  -Wall -Wextra -Werror ../libftprintf.a 