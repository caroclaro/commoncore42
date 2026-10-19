/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyelmo-l <cyelmo-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 11:31:26 by cyelmo-l          #+#    #+#             */
/*   Updated: 2026/10/16 14:16:00 by cyelmo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void delete(void *h)
// {
// 	free(h);
// 	printf("%s", "librando content ");
// }

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

// int	main(void)
// {
// 	t_list *lista;
// 	lista = (t_list *)malloc(sizeof(t_list));
// 	lista->content= strdup("aa");
// 	lista->next = NULL;
// 	ft_lstdelone(lista, delete);
// 	printf("%s", "nodo out");
// }