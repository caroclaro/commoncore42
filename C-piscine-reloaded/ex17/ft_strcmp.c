/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyelmo-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 13:36:39 by cyelmo-l          #+#    #+#             */
/*   Updated: 2026/09/23 15:53:59 by cyelmo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_strcmp(char *s1, char *s2)
{
	int	contador;

	contador = 0;
	while ((s1[contador] != '\0') || (s2[contador] != '\0'))
	{
		if (s1[contador] == s2[contador])
			contador++;
		else
			return (s1[contador] - s2[contador]);
	}
	return (s1[contador] - s2[contador]);
}
// int	main(void)
// {
//printf("%d", ft_strcmp("Si", "si"));
//printf("%d", ft_strcmp("si", "tiene que ser negattivo"));
//printf("%d", ft_strcmp("cerow", "cero"));
//}
