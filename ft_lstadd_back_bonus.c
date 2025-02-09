/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blgutier <blgutier@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 10:04:05 by blgutier          #+#    #+#             */
/*   Updated: 2025/02/09 13:23:36 by blgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ultimo;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	ultimo = ft_lstlast(*lst);
	ultimo->next = new;
}

/*int main(void)
{
	t_list *lista = NULL;
	t_list *element1 = ft_lstnew("element1");
	t_list *element2 = ft_lstnew("element2");
	t_list *element3 = ft_lstnew("element3");

	element1->next = element2;
	element2->next = element3;
	element3->next = NULL;

	ft_lstadd_back(&lista,element1);
	ft_lstadd_back(&lista,element2);
	ft_lstadd_back(&lista,element3);
		
	t_list *current = lista;
	while (current)
	{
		printf("el nodo añadido al final es %s\n", (char*)current->content);
		current = current->next;
	}
	return (0);
}*/
