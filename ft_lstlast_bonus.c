/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blgutier <blgutier@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 10:01:11 by blgutier          #+#    #+#             */
/*   Updated: 2025/02/09 10:02:52 by blgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

/*int	main(void)
{
	t_list *lista = NULL;
	t_list *element1 = ft_lstnew("element1");
	t_list *element2 = ft_lstnew("element2");
	t_list *element3 = ft_lstnew("element3");

	element1->next = element2;
	element2->next = element3;
	element3->next = NULL;
	
	lista = element1;
	t_list *last = ft_lstlast(lista);
	printf( "El ultimo nodo es %s\n", (char *)last->content);
	return (0);
}*/
