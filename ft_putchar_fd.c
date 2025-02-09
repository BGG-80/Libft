/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blgutier <blgutier@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 19:15:12 by blgutier          #+#    #+#             */
/*   Updated: 2025/02/09 12:14:42 by blgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
	return ;
}

/*#include <fcntl.h>
int	main(void)
{
	char	character;
	int		file_name;

	character = 'B';
	file_name = open("BGG_file.txt", O_WRONLY | O_CREAT, S_IRUSR);
	ft_putchar_fd(character, file_name);
	close(file_name);
	return (0);
}*/
