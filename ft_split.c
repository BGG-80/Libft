/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blgutier <blgutier@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 17:57:00 by blgutier          #+#    #+#             */
/*   Updated: 2025/02/09 12:24:44 by blgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wordcount(const char *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (*s)
	{
		if (*s != c && j == 0)
		{
			j = 1;
			i++;
		}
		else if (*s == c)
		{
			j = 0;
		}
		s++;
	}
	return (i);
}

static void	*wordallocation(const char *s, char c, char **arraypointer)
{
	size_t	i;
	size_t	i_line;
	size_t	i_long_word;

	i_line = 0;
	i = 0;
	while (s[i] != '\0')
	{
		i_long_word = 1;
		if (s[i] != c)
		{
			while ((s[i + i_long_word] != '\0') && (s[i + i_long_word] != c))
				i_long_word ++;
			arraypointer[i_line++] = ft_substr(s, i, i_long_word);
			if (arraypointer[i_line - 1] == NULL)
			{
				while (i_line -- > 0)
					free(arraypointer[i_line]);
				free(arraypointer);
				return (NULL);
			}
		}
		i = i + i_long_word;
	}
	return (arraypointer);
}

char	**ft_split(char const *s, char c)
{
	char	**arraypointer;
	size_t	number_words;

	number_words = wordcount(s, c);
	arraypointer = (char **)malloc(sizeof(char *) * (number_words + 1));
	if (arraypointer == NULL)
		return (NULL);
	if (number_words == 0)
	{
		arraypointer[0] = NULL;
		return (arraypointer);
	}
	if (wordallocation(s, c, arraypointer) != NULL)
	{
		arraypointer[number_words] = NULL;
		return (arraypointer);
	}
	return (NULL);
}

/*int main(void)
{
	char	string[] = "Adiós mundo cruel";
	char	delimit = ' ';
	char	**substring;
	size_t	i;

	substring = (ft_split(string, delimit));
	i = 0;
	while (substring[i] != NULL)
	{
		printf("%s\n" , substring[i]);
		i++;
	}
	return (0);
}*/
