/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blgutier <blgutier@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 19:21:57 by blgutier          #+#    #+#             */
/*   Updated: 2025/02/09 12:13:58 by blgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	write (fd, s, ft_strlen(s));
	return ;
}

/*#include <fcntl.h>
int	main(void)
{
	int	file_name;
	char	*str = "Hello World";

	file_name = open("BGG_string.txt", O_WRONLY | O_CREAT, S_IRUSR);
	ft_putstr_fd(str, file_name);
	close (file_name);
	return (0);
}*/
