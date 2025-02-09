/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blgutier <blgutier@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 09:58:48 by blgutier          #+#    #+#             */
/*   Updated: 2025/02/09 13:22:20 by blgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst -> next;
	}
	return (count);
}

/*int main()
{
	t_list *lista = NULL;
	t_list *nodo1 = ft_lstnew("nodo1");
    t_list *nodo2 = ft_lstnew("nodo2");
	t_list *nodo3 = ft_lstnew("nodo3");

    nodo1->next = nodo2;
    nodo2->next = nodo3;
	nodo3->next = NULL;

    lista = nodo1;
        printf("El número de nodos es: %d\n", ft_lstsize(lista));
   	return (0);
}*/
