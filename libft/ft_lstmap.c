/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyelmo-l <cyelmo-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 15:11:48 by cyelmo-l          #+#    #+#             */
/*   Updated: 2026/10/16 13:13:08 by cyelmo-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void *f(void * a)
// {
// 	a = "aAAa";
// 	return a;
// }
// void delete(void *h)
// {
// 	free(h);
// 	printf("%s", "librando content ");
// }

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*finalist;
	t_list	*nodes;
	void	*contento;

	if (!lst || !f || !del)
		return (NULL);
	finalist = NULL;
	while (lst != NULL)
	{
		contento = f(lst->content);
		nodes = ft_lstnew(contento);
		if (!nodes)
		{
			del(contento);
			ft_lstclear(&finalist, del);
			return (NULL);
		}
		ft_lstadd_back(&finalist, nodes);
		lst = lst->next;
	}
	return (finalist);
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
// 	t_list *resultado = ft_lstmap(listita, f, delete);
//     t_list *temp = resultado;
//     printf("Contenido de la nueva lista:\n");
//     while (temp != NULL)
//     {
//         printf("%s\n", (char *)temp->content);
//         temp = temp->next;
//     }
// }