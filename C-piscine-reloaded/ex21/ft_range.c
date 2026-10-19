/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyelmo-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 16:26:16 by cyelmo-l          #+#    #+#             */
/*   Updated: 2026/09/25 13:25:27 by cyelmo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*cuerda;

	if (min >= max)
		return (NULL);
	cuerda = malloc((max - min) * sizeof(int));
	if (cuerda == NULL)
		return (NULL);
	i = 0;
	while (i < (max - min))
	{
		cuerda[i] = min + i;
		i++;
	}
	return (cuerda);
}
// #include <unistd.h>
// #include <stdio.h>
// int	main(void)
// {
// 	int	*res;
// 	int	min = 5;
// 	int	max = 10;
// 	int	i;
// 	res = ft_range(min, max);
// 	i = 0;
// 	while (i < (max - min))
// 	{
// 		printf("res[%d] = %d\n", i, res[i]);
// 		i++;
// 	}
// 	free(res);
// 	return (0);
// }
