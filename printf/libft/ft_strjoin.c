/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyelmo-l <cyelmo-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 16:20:38 by cyelmo-l          #+#    #+#             */
/*   Updated: 2026/10/16 14:16:32 by cyelmo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*cambiar;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	cambiar = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!cambiar)
		return (NULL);
	while (s1[i] != '\0')
	{
		cambiar[i] = s1[i];
		i++;
	}
	while (s2[j] != 0)
	{
		cambiar[i] = s2[j];
		i++;
		j++;
	}
	cambiar[i] = 0;
	return (cambiar);
}

// int main(void)
// {
// 	char s1[] = "cafe ";
// 	char s2[] = "con leche";
// 	printf("%s", ft_strjoin(s1, s2));
// }
