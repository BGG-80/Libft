/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blgutier <blgutier@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 09:52:34 by blgutier          #+#    #+#             */
/*   Updated: 2025/02/09 13:35:25 by blgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node -> content = (void *)content;
	new_node -> next = NULL;
	return (new_node);
}
/*int main()
{
    int *data = (int *)malloc(sizeof(int));
    *data = 42;

    t_list *newElement = ft_lstnew(data);
    if (newElement != NULL)
    {
        printf("Contenido: %d\n", *((int *)newElement->content));
        free(data);
        free(newElement);
    }
	return(0);
}*/
