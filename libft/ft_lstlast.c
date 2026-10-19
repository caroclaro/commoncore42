/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyelmo-l <cyelmo-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 18:55:16 by cyelmo-l          #+#    #+#             */
/*   Updated: 2026/10/16 12:12:43 by cyelmo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

// int	main(void)
// {
// 	t_list *nodo1 = (t_list *)malloc(sizeof(t_list));
//     t_list *nodo2 = (t_list *)malloc(sizeof(t_list));
//     t_list *nodo3 = (t_list *)malloc(sizeof(t_list));
//     t_list *nodo4 = (t_list *)malloc(sizeof(t_list));
//     t_list *nodo5 = (t_list *)malloc(sizeof(t_list));

//     if (!nodo1 || !nodo2 || !nodo3 || !nodo4 || !nodo5)
//     {
//         printf("Error: No se pudo asignar memoria.\n");
//         return (1);
//     }

//     nodo1->content = "Primer nodo";
//     nodo2->content = "Segundo nodo";
//     nodo3->content = "Tercer nodo";
//     nodo4->content = "Cuarto nodo";
//     nodo5->content = "Quinto nodo";

//     t_list *listita = nodo1;
//     nodo1->next = nodo2; 
//     nodo2->next = nodo3;
//     nodo3->next = nodo4;
//     nodo4->next = nodo5;
//     nodo5->next = NULL;
// 	printf("%s ", (char *)ft_lstlast(listita)->content);
// }
