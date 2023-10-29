/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livliege <livliege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 17:39:17 by livliege          #+#    #+#             */
/*   Updated: 2023/10/29 15:57:38 by livliege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function name 		ft_putendl_fd
Prototype 			void ft_putendl_fd(char *s, int fd);
Turn in files 		-
Parameters 			s: The string to output.
					fd: The file descriptor on which to write.
Return value 		None
External functs. 	write
Description 		Outputs the string ’s’ to the given file descriptor 
					followed by a newline.
*/

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

// #include <stdio.h>
// #include <fcntl.h>
// int main(void)
// {
// 	int fd = open("test.c", O_CREAT | O_RDWR);
// 	char str[] = "Hallo!";
// 	printf("fd = %d\n", fd);
// 	ft_putendl_fd(str, fd);
// 	close(fd);
// 	return (0);
// }
