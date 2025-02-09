/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blgutier <blgutier@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 13:31:44 by blgutier          #+#    #+#             */
/*   Updated: 2025/02/09 13:52:09 by blgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
	{
		return (c);
	}
}
/*int	main(void)
{
	int	c;

	c = 'b';
	printf("The uppercase of '%c' is '%c'\n",c, ft_toupper(c));
	return (0);
}*/
