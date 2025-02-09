/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blgutier <blgutier@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 17:52:26 by blgutier          #+#    #+#             */
/*   Updated: 2025/01/27 20:48:46 by blgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	int	a;
	int	b;
	int	c;

	a = 42;
	b = 3;
	c = 165;
	printf ("¿Es un caracter imprimible en ASCII? %d\n", ft_isprint(a));
	printf ("¿Es un caracter imprimible en ASCII? %d\n", ft_isprint(b));
	printf ("¿Es un caracter imprimible en ASCII? %d\n", ft_isprint(c));
	return (0);
}*/
