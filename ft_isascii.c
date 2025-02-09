/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blgutier <blgutier@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 17:20:09 by blgutier          #+#    #+#             */
/*   Updated: 2025/02/09 11:48:24 by blgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	int	a;
	int	b;
	int	c;

	a = 100;
	b = 'd';
	c = 128;
	printf ("¿ Es un carácter ASCII?: %d\n", ft_isascii(a));
	printf ("¿ Es un carácter ASCII?: %d\n", ft_isascii(b));
	printf ("¿ Es un carácter ASCII?: %d\n", ft_isascii(c));
	return (0);
}*/
