/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyelmo-l <cyelmo-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 14:12:24 by cyelmo-l          #+#    #+#             */
/*   Updated: 2026/10/16 11:43:26 by cyelmo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

// int main(void)
// {
// 	t_list *nueva;
// 	t_list *vieja;
// 	nueva = (t_list *)malloc(sizeof(t_list));
// 	vieja = (t_list *)malloc(sizeof(t_list));
// 	nueva->content = "holi ";
// 	vieja->content = "bye";
// 	ft_lstadd_front(&vieja, nueva);
// 	while(vieja != NULL)
// 	{
// 		printf("%s", (char *)vieja->content);
// 		vieja = vieja->next;
// 	}
// }
