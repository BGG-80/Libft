/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blgutier <blgutier@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 17:47:32 by blgutier          #+#    #+#             */
/*   Updated: 2025/01/28 20:33:16 by blgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	j;
	size_t	len_src;
	size_t	len_dst;

	j = 0;
	len_src = ft_strlen (src);
	if (size == 0)
		return (len_src);
	len_dst = ft_strlen (dest);
	if (size < len_dst + 1)
		return (len_src + size);
	while (src[j] && (len_dst + j + 1) < size)
	{
		dest[len_dst + j] = src[j];
		j++;
	}
	if (len_dst < size)
		dest[len_dst + j] = '\0';
	return (len_dst + ft_strlen(src));
}
/*int     main(void)
{
	char dest[15] = "Hola";
	const char *src = "mundo";
	size_t result;

	result = ft_strlcat(dest, src, sizeof(size_t));
	printf("Destino %s\n", dest);
	printf("longitud total : %zu\n",result);
	return (0);
}*/
