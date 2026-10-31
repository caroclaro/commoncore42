/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stringaux.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyelmo-l <cyelmo-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 11:19:49 by cyelmo-l          #+#    #+#             */
/*   Updated: 2026/10/29 12:27:00 by cyelmo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//ft_putstrcont, es un pustring que la escribe si todo ha ido bien
//ft_auxs_fd primero revisa si hay string para ecribir el null 
// si no usa ft_putstrcont

#include "../libraries/ft_printf.h"

int	ft_putstrcont(char *s)
{
	int	i;

	i = 0;
	while (s[i] != 0)
	{
		write(1, &s[i], 1);
		i++;
	}
	return (i);
}

int	ft_auxstr(va_list args)
{
	int		cont;
	char	*save;

	cont = 0;
	save = va_arg(args, char *);
	if (save == NULL)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	else
		cont = ft_putstrcont(save);
	return (cont);
}
