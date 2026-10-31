/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyelmo-l <cyelmo-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 17:33:59 by cyelmo-l          #+#    #+#             */
/*   Updated: 2026/10/16 13:49:11 by cyelmo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_supportstrim(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (set[j] != '\0')
		{
			if (set[j] == s1[i])
				break ;
			j++;
		}
		if (set[j] == '\0')
			break ;
		i++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	k;

	if (!s1 || !set)
		return (NULL);
	i = ft_supportstrim(s1, set);
	k = ft_strlen(s1) - 1;
	while (k > i)
	{
		j = 0;
		while (set[j] != '\0')
		{
			if (set[j] == s1[k])
				break ;
			j++;
		}
		if (set[j] == '\0')
			break ;
		k--;
	}
	return (ft_substr(s1, i, (size_t)(k - i + 1)));
}

// int main(void)
// {
// 	//char *c = ft_strtrim("12123jefenr2ejfjefn212", "123");
// 	printf("%s" , ft_strtrim("123e123", "123"));
// }
