/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blgutier <blgutier@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 10:22:25 by blgutier          #+#    #+#             */
/*   Updated: 2025/02/09 13:24:33 by blgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
	return ;
}

/*static void print_content(void *content)
{
	printf("%s\n", (char *)content);
}


int	main(void)
{
	t_list *nodo1 = ft_lstnew("Hola");
	t_list *nodo2 = ft_lstnew("que");
	t_list *nodo3 = ft_lstnew("tal");

	nodo1->next = nodo2;
	nodo2->next = nodo3;
	nodo3->next = NULL;

	printf("Printed list is:\n");
	ft_lstiter(nodo1, print_content);

	free(nodo1);
	free(nodo2);
	free(nodo3);
	return (0);
}*/
