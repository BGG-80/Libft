/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blgutier <blgutier@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 14:08:43 by blgutier          #+#    #+#             */
/*   Updated: 2025/02/09 11:43:23 by blgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}
/* 
int main(void)
{
    char str[10] = "123456789";
    printf("Antes de ft_bzero: %s\n", str);

    ft_bzero(str, 5);
    printf("Después de ft_bzero: %s\n", str + 5);
    return (0);
}*/
