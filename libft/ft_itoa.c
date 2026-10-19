/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyelmo-l <cyelmo-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 20:20:44 by cyelmo-l          #+#    #+#             */
/*   Updated: 2026/10/15 12:29:05 by cyelmo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//como un strlen, pero con int
static size_t	ft_intlen(int s)
{
	int	len;

	len = 0;
	if (s == -2147483648)
		return (10);
	if (s < 0)
		s = s * (-1);
	if (s == 0)
		return (1);
	while (s > 0)
	{
		s = s / 10;
		len++;
	}
	return (len);
}

//Recorrer y rellenar la string
static void	ft_funwhile(int i, char	*c, int n)
{
	while (i >= 0)
	{
		c[i] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
}

//en el caso de que sea 0
static char	ft_zeron(int n, char *c)
{
	if (n == 0)
	{
		c[0] = '0';
		return ('0');
	}
	return ('1');
}

char	*ft_itoa(int n)
{
	int		i;
	char	*c;
	int		negative;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	negative = 1;
	i = ft_intlen(n);
	if (n < 0)
	{
		negative = -1;
		i = i + 1;
		n = n * negative;
	}
	c = malloc(i + 1);
	if (!c)
		return (NULL);
	c[i] = '\0';
	i--;
	if (ft_zeron(n, c) == '0')
		return (c);
	ft_funwhile(i, c, n);
	if (negative < 0)
		c[0] = '-';
	return (c);
}

// int main(void)
// {
// 	printf("%s", ft_itoa(0));
// }