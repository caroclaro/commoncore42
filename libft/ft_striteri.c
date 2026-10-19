/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyelmo-l <cyelmo-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 17:17:47 by cyelmo-l          #+#    #+#             */
/*   Updated: 2026/10/16 14:17:42 by cyelmo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void pruebaNO(unsigned int a, char* b)
// {
// 	if(a%2 == 0)
// 		*b = 'N';
// 	else
// 		*b = 'o';
// }
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != 0)
	{
		f(i, &s[i]);
		i++;
	}
}

// int	main(void)
// {	
// 	char s[] = "HOL BUENAS";
// 	ft_striteri(s, pruebaNO);
// 	printf("%s", s);
// }