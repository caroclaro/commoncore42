/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyelmo-l <cyelmo-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 12:26:48 by cyelmo-l          #+#    #+#             */
/*   Updated: 2026/10/16 11:45:38 by cyelmo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	delete(void *h)
// {
// 	free(h);
// 	printf("%s", "librando content ");
// }
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*lista;

	if (!lst || !del)
		return ;
	while (*lst != NULL)
	{
		lista = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = lista;
	}
}

// int	main(void)
// {	
// 	t_list *lista;
// 	lista = (t_list *)malloc(sizeof(t_list));
// 	lista->content= strdup("aa");
// 	lista->next = NULL;
// 	ft_lstclear(&lista, delete);
// 	printf("%s", "nodo out");
// }
