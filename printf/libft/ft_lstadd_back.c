/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyelmo-l <cyelmo-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 20:46:40 by cyelmo-l          #+#    #+#             */
/*   Updated: 2026/10/16 11:43:09 by cyelmo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*list;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	list = *lst;
	while (list->next != NULL)
	{
		list = list->next;
	}
	list->next = new;
}

// int main(void)
// {
// 	t_list *nueva;
// 	t_list *vieja;

// 	nueva = (t_list *)malloc(sizeof(t_list));
// 	vieja = (t_list *)malloc(sizeof(t_list));
// 	nueva->content = " buenas";
// 	vieja->content = "holi";
// 	ft_lstadd_back(&vieja, nueva);
// 	while(vieja != NULL)
// 	{
// 		printf("%s", (char *)vieja->content);
// 		vieja = vieja->next;
// 	}
// }