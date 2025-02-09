/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blgutier <blgutier@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 10:12:13 by blgutier          #+#    #+#             */
/*   Updated: 2025/01/27 20:51:04 by blgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = 'j';
	b = '8';
	c = '$';
	d = 'A';
	printf ("¿El valor es alfa o num? : %d\n", ft_isalnum(a));
	printf ("¿El valor es alfa o num? : %d\n", ft_isalnum(b));
	printf ("¿El valor es alfa o num? : %d\n", ft_isalnum(c));
	printf ("¿El valor es alfa o num? : %d\n", ft_isalnum(d));
	return (0);
}*/
