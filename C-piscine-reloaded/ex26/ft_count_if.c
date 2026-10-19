/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyelmo-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 12:30:13 by cyelmo-l          #+#    #+#             */
/*   Updated: 2026/09/25 13:04:59 by cyelmo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	total;

	i = 0;
	total = 0;
	if (!tab || !f)
		return (0);
	while (tab[i] != 0)
	{
		if (f(tab[i]) == 1)
			total++;
		i++;
	}
	return (total);
}
// int numeroM(char *c)
// {
// 	if(c[0] == 'M')
// 		return (1);
// 	return (0);
// }
// #include <stdio.h>
// int	main(void)
// {
// 	char *cadena[]= {"Miaunu", "MALNU", "xinsi", "Don Manuel", NULL};
// 	printf("%d", ft_count_if(cadena, &numeroM));
// }