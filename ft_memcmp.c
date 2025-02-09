/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blgutier <blgutier@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 19:04:44 by blgutier          #+#    #+#             */
/*   Updated: 2025/02/09 11:54:24 by blgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;

	i = 0;
	ptr1 = (const unsigned char *)s1;
	ptr2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	str1[20] = "Hallo";
	char	str2[20] = "Hello";
	int	result = ft_memcmp(str1, str2, sizeof(str1));

	if (result == 0) 
	{
        printf("Strings are equal.\n");
    }
	else if (result < 0) 
	{
        printf("String 1 is less than String 2.\n");
    }
	else 
	{
        printf("String 1 is greater than String 2.\n");
    }
    return (0);
}*/
