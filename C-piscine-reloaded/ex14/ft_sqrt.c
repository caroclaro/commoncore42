/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyelmo-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 12:46:31 by cyelmo-l          #+#    #+#             */
/*   Updated: 2026/09/23 13:06:45 by cyelmo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_sqrt(int nb)
{
	int	num;

	num = 1;
	if (nb <= 0)
	{
		return (0);
	}
	else
	{
		while ((num * num) <= nb)
		{
			if ((num * num) == nb)
				return (num);
			num++;
		}
		return (0);
	}
}
// int main(void){
// 	int a;
//     int b;

//     a = 0;
//     b = 0;
//     printf ("%d\n", ft_sqrt(16));
// }
