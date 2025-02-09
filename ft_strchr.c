/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blgutier <blgutier@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 18:04:49 by blgutier          #+#    #+#             */
/*   Updated: 2025/02/09 12:32:07 by blgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	ch;

	ch = (unsigned char)c;
	while (*s != '\0')
	{
		if (*s == ch)
			return ((char *) s);
		s++;
	}
	if (*s == ch)
		return ((char *) s);
	return (NULL);
}

/*int	main(void)

{
	char c;

	c = 'B';
	printf("%s\n", ft_strchr("Me llamo Blanca", c));
	return(0); 
}*/
