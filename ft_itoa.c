/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blgutier <blgutier@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 18:11:05 by blgutier          #+#    #+#             */
/*   Updated: 2025/02/09 11:50:57 by blgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digit(int n)
{
	int				counter;
	unsigned int	numb;

	counter = 1;
	if (n < 0)
		numb = -n;
	if (n >= 0)
		numb = n;
	while (numb >= 10)
	{
		numb = numb / 10;
		counter++;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	int				len;
	unsigned int	num;
	char			*string;
	int				is_negative;

	is_negative = (n < 0);
	len = count_digit(n)+ is_negative;
	string = (char *)malloc(sizeof(char) * (len + 1));
	if (!string)
		return (NULL);
	string[len] = '\0';
	if (n >= 0)
		num = n;
	if (n < 0)
	{
		string[0] = '-';
		num = -n;
	}
	while (len - is_negative > 0)
	{
		len--;
		string[len] = (num % 10) + '0';
		num = num / 10;
	}
	return (string);
}

/*int	main(void)
{
	int	numb = 0;
	char *str = ft_itoa(numb);

	if (str)
	{
		printf("Number converted into string is %s\n", str);
		free (str);
	}
	return (0);
}*/
