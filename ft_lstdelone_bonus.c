/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blgutier <blgutier@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 10:17:03 by blgutier          #+#    #+#             */
/*   Updated: 2025/02/09 13:52:49 by blgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*static void del(void *content)
{
	free(content);
}

int main (void)
{	
	char *contenido = malloc(10);
		if(!contenido)
			return (1);
	
	contenido = ft_strdup("Hola");
	t_list *nodo = ft_lstnew(contenido);
	printf("Antes de eliminar la lista tenía: %s\n", (char *)nodo->content);
	ft_lstdelone(nodo, del);
	return (0);
}*/
