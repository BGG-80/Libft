/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blgutier <blgutier@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 19:44:30 by blgutier          #+#    #+#             */
/*   Updated: 2025/02/09 12:50:39 by blgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	len1;
	size_t	len2;
	size_t	i;
	size_t	j;

	if (!s1 && !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	join = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (!join)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		join[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < len2 && s2[j] != '\0')
		join[i++] = s2[j++];
	join[i] = '\0';
	return (join);
}
/*int	main(void)
{
	char 	string1[] = "hola";
	char	string2[] = "mundo";
	char	*new1;

	new1 = (ft_strjoin (string1,string2));
	printf("New string is : %s  %s\n ", new1, string2);

	return(0);
	
}*/
