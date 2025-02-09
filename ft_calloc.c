/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blgutier <blgutier@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 20:20:35 by blgutier          #+#    #+#             */
/*   Updated: 2025/02/09 11:46:51 by blgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total_size;

	total_size = (nmemb * size);
	ptr = malloc(total_size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	ft_memset(ptr, 0, total_size);
	return (ptr);
}

/*int main(void) 
{
    void *ptr1 = ft_calloc(10, sizeof(int));
    if (ptr1 != NULL)
    {
        printf("Allocation of 10 integers was successful.\n");
    }
    else
    {
        printf("Allocation of 10 integers failed.\n");
    }
    void *ptr2 = ft_calloc(1000000, sizeof(int));
    if (ptr2 == NULL)
    {
        printf("Allocation of 1,000,000 integers failed as expected.\n");
    }
    else
    {
        printf("Allocation of 1,000,000 integers was unexpect. successful.\n");
    }


    return 0;
}*/
