/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blgutier <blgutier@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 10:20:26 by blgutier          #+#    #+#             */
/*   Updated: 2025/02/09 13:37:47 by blgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (!lst ||!del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = temp;
	}
	return ;
}

/*static void del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list 	*element1 = ft_lstnew(ft_strdup("hola"));
	t_list	*element2 = ft_lstnew(ft_strdup("que"));
	t_list	*element3 = ft_lstnew(ft_strdup("tal"));

	element1->next = element2;
	element2->next = element3;
	element3->next = NULL;
	
	printf("la lista existente es \n");
	t_list *temp = element1;
	while(temp)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}
	ft_lstclear(&element1, del);
	if(!element1)
		printf("y ahora la lista ya no existe\n");
	return (0);
}*/
