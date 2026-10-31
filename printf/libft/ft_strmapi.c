/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyelmo-l <cyelmo-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 16:44:38 by cyelmo-l          #+#    #+#             */
/*   Updated: 2026/10/15 15:33:49 by cyelmo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//
// char    pruebaNO(unsigned int a, char b)
// {
// 	if(a%2 == 0)
// 	{
// 		b = 'N';
// 		return b;
// 	}
// 	else
// 	{
// 		b = 'o';
// 		return b;
// 	}
// }

//guarda en uan nueva cadena los char de s tras aplicarles f
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*m;

	if (!s || !f)
		return (NULL);
	i = 0;
	m = malloc(ft_strlen(s) + 1);
	if (!m)
		return (NULL);
	while (s[i] != 0)
	{
		m[i] = f(i, s[i]);
		i++;
	}
	m[i] = 0;
	return (m);
}

// int	main(void)
// {
// 	printf("%s", ft_strmapi("           ", pruebaNO));
// }