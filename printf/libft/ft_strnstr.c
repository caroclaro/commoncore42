/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyelmo-l <cyelmo-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 15:56:45 by cyelmo-l          #+#    #+#             */
/*   Updated: 2026/10/15 15:41:38 by cyelmo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//busca s2 en s1, pero solo en n caracteres
char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (s2[0] == 0)
		return ((char *)s1);
	if (!n)
		return (NULL);
	while (i < n && s1[i])
	{
		j = 0;
		while (s2[j] == s1[i] && (i < n) && s1[i] && s2[j])
		{
			i++;
			j++;
		}
		if ((s2[j] == '\0') && (i <= n))
			return ((char *)&s1[(i - j)]);
		if (j != 0)
			i = i - j + 1;
		else
			i++;
	}
	return (NULL);
}

// int main (void)
// {
// 	char s1[] = "Buuu  buuaa   buuu fwawf ";
// 	char s2[] = "buuu";
// 	printf("%s",ft_strnstr(s1, s2, 30));
// }
