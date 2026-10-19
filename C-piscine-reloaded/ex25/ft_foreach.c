/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyelmo-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 11:52:28 by cyelmo-l          #+#    #+#             */
/*   Updated: 2026/09/25 12:17:51 by cyelmo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	if (!tab || !f || length <= 0)
		return ;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
// #include <stdio.h>
// void ft_putnbr(int n)
// {
// 	printf("%d ", n);
// }
// int main(void)
// {
// 	int tam = 5;
// 	int sopita[]  = {1 , 2 , 3 , 4 , 5, 6};
// 	ft_foreach(sopita, tam, ft_putnbr);
// }