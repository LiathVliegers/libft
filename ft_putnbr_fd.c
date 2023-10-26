/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livliege <livliege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 17:55:26 by livliege          #+#    #+#             */
/*   Updated: 2023/10/25 22:51:18 by livliege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function name 		ft_putnbr_fd
Prototype 			void ft_putnbr_fd(int n, int fd);
Turn in files 		-
Parameters 			n: The integer to output.
					fd: The file descriptor on which to write.
Return value 		None
External functs. 	write
Description 		Outputs the integer ’n’ to the given file descriptor.
*/
#include "libft.h"

void	print_number_recurcive(long nb, int fd)
{
	int	digit;

	digit = nb % 10 + '0';
	if (nb == 0)
	{
		return ;
	}
	print_number_recurcive((nb / 10), fd);
	write(fd, &digit, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = (long)n;
	if (nb == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb *= -1;
	}
	print_number_recurcive(nb, fd);
}

// #include <stdio.h>
// #include <fcntl.h>

// int main(void)
// {
// 	int number = -2147483648;
// 	int fd = open("test.c", O_CREAT | O_RDWR);

// 	printf("fd = %d\n", fd);
// 	ft_putnbr_fd(number, fd);
// 	close(fd);

// 	return(0);
// }