/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livliege <livliege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 17:03:56 by livliege          #+#    #+#             */
/*   Updated: 2023/10/28 18:39:05 by livliege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function name 		ft_putchar_fd
Prototype 			void ft_putchar_fd(char c, int fd);
Turn in files 		-
Parameters 			c: The character to output.
					fd: The file descriptor on which to write.
Return value 		None
External functs. 	write
Description 		Outputs the character ’c’ to the given file descriptor.
*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (c == NULL)
		return (NULL);
	write(fd, &c, 1);
}

// #include <stdio.h>
// #include <fcntl.h>
// int main(void)
// {
// 	int fd = open("test.c", O_CREAT | O_RDWR);
// 	char c = 'L';
// 	printf("fd = %d\n", fd);
// 	ft_putchar_fd(c, fd);
// 	ft_putchar_fd('\n', fd);
// 	close(fd);
// 	return (0);
// }