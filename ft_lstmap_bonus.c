/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blgutier <blgutier@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 10:37:42 by blgutier          #+#    #+#             */
/*   Updated: 2025/02/09 13:58:03 by blgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void(*del)(void *))
{
	t_list	*new_list;
	t_list	*temp_list;

	new_list = NULL;
	if (!lst || !f)
		return (NULL);
	while (lst)
	{
		temp_list = ft_lstnew(f(lst->content));
		if (!temp_list)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, temp_list);
		lst = lst->next;
	}
	return (new_list);
}

/*static void	*duplicate(void *content)
{
	int *value = (int *)content;
	int *new_value = malloc(sizeof(int));
	
	if (!new_value)
		return NULL;

	*new_value = (*value) * 2;
	return (new_value);
}

static void free_content(void *content)
{
	free(content);
	
}

static void	print_list(t_list *lst)
{
	while(lst)
	{
		int *value = (int *)lst->content;
		printf("%d\n", (*value));
		lst = lst->next;
	}
}

int	main(void)
{
	int a;
	int b;
	int c;

	a = 1;
	b = 2;
	c = 3;

	t_list	*nodo1 = ft_lstnew(&a);
	t_list	*nodo2 = ft_lstnew(&b);
	t_list	*nodo3 = ft_lstnew(&c);

	nodo1->next = nodo2;
	nodo2->next = nodo3;
	nodo3->next = NULL;

	printf("la lista original\n");
	print_list(nodo1);

	t_list *nuevalista = ft_lstmap(nodo1, duplicate, free_content);
	printf("la lista duplicada\n");
	print_list(nuevalista);
	
	ft_lstclear(&nuevalista, free_content);
	return (0);
}*/
