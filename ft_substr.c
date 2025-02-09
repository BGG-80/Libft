/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blgutier <blgutier@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 19:35:45 by blgutier          #+#    #+#             */
/*   Updated: 2025/02/09 13:19:13 by blgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	i;
	char	*substr;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start > s_len)
		return (ft_strdup (""));
	if (len > s_len - start)
		len = s_len - start;
	substr = (char *)malloc((len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substr[i] = s[start];
		i++;
		start++;
	}
	substr[i] = '\0';
	return (substr);
}

/*int	main(void)
{
    char s[] = "Hola mundo";
    char *sub1;
	char *sub2;
	char *sub3;
	char *sub4;

	sub1 = ft_substr(s, 6, 5);
    printf("Sub1: '%s'\n", sub1);
    
	sub2 = ft_substr(s, 0, 0);
    printf("Sub2: '%s'\n", sub2);

	sub3 = ft_substr(s, 5, 6);
    printf("Sub3: '%s'\n", sub3);

	sub4 = ft_substr(s, 40, 50);
    printf("Sub4: '%s'\n", sub4);
	return (0);
}*/
