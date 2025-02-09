/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blgutier <blgutier@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 18:34:20 by blgutier          #+#    #+#             */
/*   Updated: 2025/02/09 11:52:53 by blgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)&ptr[i]);
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
    char str[20] = "Hellos, World!";
    void *ptr;

	ptr = ft_memchr(str, 'o', sizeof(str));
    if (ptr != NULL) 
	{
        printf("First occurrence of 'o' is in : %s\n", (char *)ptr);
    } 
	else 
	{
        printf("Character not found.\n");
    }
    return 0;
}*/
