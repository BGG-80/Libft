/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blgutier <blgutier@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 20:43:58 by blgutier          #+#    #+#             */
/*   Updated: 2025/02/09 12:18:01 by blgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		n = -n;
		write(fd, "-", 1);
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd((n % 10) + 48, fd);
	}
	else
		ft_putchar_fd (n + 48, fd);
	return ;
}

/*#include <fcntl.h>
int main(void)
{
	int	file_name;
	int	numbers;

	numbers = 42;
	file_name = open("BGG_putnbr.txt", O_WRONLY | O_CREAT, S_IRUSR);
	ft_putnbr_fd(numbers,file_name);
	close(file_name);
	return (0);
}*/
