/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyelmo-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 17:31:46 by cyelmo-l          #+#    #+#             */
/*   Updated: 2026/09/24 12:57:50 by cyelmo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	writear(int num, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	while (num > i)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*cadena;

	j = 0;
	while (argc > j)
	{
		i = 1;
		while ((argc - 1) > i)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				cadena = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = cadena;
			}
			i++;
		}
		j++;
	}
	writear(argc, argv);
}
