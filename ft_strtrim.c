/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blgutier <blgutier@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 17:41:22 by blgutier          #+#    #+#             */
/*   Updated: 2025/02/09 13:51:11 by blgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	start;
	int		j;

	if (!s1 && !set)
		return (NULL);
	start = 0;
	while (s1[start] != '\0' && ft_strchr(set, s1[start]) != NULL)
		start++;
	j = ft_strlen(s1);
	while (j != 0 && ft_strchr(set, s1[j]) != NULL)
		j--;
	trim = ft_substr (s1, start, j - start +1);
	return (trim);
}
/*int	main(void)
{
	char s1[] = "Hola mundo";
	char trimmed[] = "oam";
		
        printf("Resultado: '%s'\n",ft_strtrim(s1,trimmed));
	
	return (0);
}*/
