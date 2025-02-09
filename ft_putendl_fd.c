/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blgutier <blgutier@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 21:27:38 by blgutier          #+#    #+#             */
/*   Updated: 2025/02/09 12:16:51 by blgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	len;

	len = ft_strlen(s);
	write (fd, s, len);
	write (fd, "\n", 1);
	return ;
}

/*#include <fcntl.h>

int main(void)
{
	int	file_name;
	char *str = "Hola mundo"; 

	file_name = open("BGG_endfile.txt", O_WRONLY | O_CREAT, S_IRUSR);
	ft_putendl_fd(str, file_name);
	close(file_name);
	return (0);
}*/
