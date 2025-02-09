/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blgutier <blgutier@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 20:11:51 by blgutier          #+#    #+#             */
/*   Updated: 2025/01/27 20:49:32 by blgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
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
	e = 'H';
	f = '/';
	printf ("¿El valor es un numero? %d\n", ft_isdigit(c));
	printf ("¿El valor es un numero? %d\n", ft_isdigit(d));
	printf ("¿El valor es un numero? %d\n", ft_isdigit(e));
	printf ("¿El valor es un numero? %d\n", ft_isdigit(f));
	return (0);
}*/
