/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyelmo-l <cyelmo-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 19:22:16 by cyelmo-l          #+#    #+#             */
/*   Updated: 2026/10/15 15:22:56 by cyelmo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//busca la primera aparacion de c en s
char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	a;

	a = c;
	i = 0;
	while (s[i] != 0)
	{
		if (s[i] == a)
			return ((char *)&s[i]);
		i++;
	}
	if (a == 0)
		return ((char *)&s[i]);
	return (0);
}
// #include <stdio.h>
// int main (void)
// {
// 	char de[] = "iiiiaiiaf";
// 	printf("%s",ft_strchr(de, 'a'));
// }
