/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyelmo-l <cyelmo-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 11:34:04 by cyelmo-l          #+#    #+#             */
/*   Updated: 2026/10/15 12:04:10 by cyelmo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	skipshi(const char *str, int i)
{
	while (str[i] == ' ' || (str[i] == '\f') || (str[i] == '\t')
		|| (str[i] == '\n') || (str[i] == '\r') || (str[i] == '\v'))
		i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	num;

	i = 0;
	sign = 1;
	num = 0;
	i = skipshi(str, i);
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * (-1);
		if (str[i + 1] == '-' || str[i + 1] == '+')
			return (0);
		i++;
	}
	while (ft_isdigit(str[i]) == 1)
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	return (num * sign);
}

// int main(void)
// {
// 	char num[] = "\n  20";
// 	printf("%d",ft_atoi(num));
// }   
