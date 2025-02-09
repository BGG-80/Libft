/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blgutier <blgutier@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 17:45:46 by blgutier          #+#    #+#             */
/*   Updated: 2025/01/27 20:50:33 by blgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	int	c;
	int	d;
	int	e;
	int	f;

	c = 'j';
	d = '8';
	e = 'K';
	f = '&';
	printf ("¿Es una letra de verdad? %d\n", ft_isalpha(c));
	printf ("¿Es una letra de verdad? %d\n", ft_isalpha(d));
	printf ("¿Es una letra de verdad? %d\n", ft_isalpha(e));
	printf ("¿Es una letra de verdad? %d\n", ft_isalpha(f));
	return (0);
}*/
