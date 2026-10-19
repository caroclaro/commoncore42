/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyelmo-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 16:03:48 by cyelmo-l          #+#    #+#             */
/*   Updated: 2026/09/25 13:40:51 by cyelmo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	ft_iterative_factorial(int nb)
{
	int	resul;

	resul = 1;
	if ((nb >= 0) && (nb <= 12))
	{
		while (nb >= 1)
		{
			resul = resul * nb;
			nb--;
		}
		return (resul);
	}
	else
		return (0);
}
// int main(void){
// 	int a;
//     int b;

//     a = 0;
//     b = 0;
//     printf ("%d\n", ft_iterative_factorial(12));
// }
