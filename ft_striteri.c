/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blgutier <blgutier@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 20:55:09 by blgutier          #+#    #+#             */
/*   Updated: 2025/02/09 12:33:31 by blgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*static void	upper(unsigned int iterador, char *frase)
{
	frase[iterador] = ft_toupper(frase[iterador]);
}*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

/*int	main(void)
{
	char	string[] = "¡Viva la birra!";
	ft_striteri(string, upper);
	printf("%s\n", string);
	return (0);
}*/
