/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyelmo-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 15:57:34 by cyelmo-l          #+#    #+#             */
/*   Updated: 2026/09/23 17:30:33 by cyelmo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
void	ft_putchar(char c);
// {
// 	write(1, &c, 1);
// }

int	main(int argc, char **argv)
{
	int	contador;
	int	recorredor;

	contador = 1;
	while (contador < argc)
	{
		recorredor = 0;
		while (argv[contador][recorredor] != '\0')
		{
			ft_putchar(argv[contador][recorredor]);
			recorredor++;
		}
		ft_putchar('\n');
		contador ++;
	}
}
