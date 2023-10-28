/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livliege <livliege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:02:11 by livliege          #+#    #+#             */
/*   Updated: 2023/10/28 18:39:34 by livliege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
       The memset() function fills the first n bytes of the memory area pointed 
	   to by s with the constant byte c.

RETURN VALUE
       The memset() function returns a pointer to the memory area s.
*/

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	if (s == NULL || c == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		*(unsigned char *)(s + i) = c;
		i++;
	}
	return (s);
}

// #include <stdio.h> 
// #include <string.h> 

// int main()
// {
//     char str[50] = "Codam and it's students are the best!";
//     char str1[50] = "Codam and it's students are the best!";

// 	printf("Before (ft_)memset: %s\n", str);

//     ft_memset(str + 15, '.', 8*sizeof(char));
//   	memset(str1 + 15, '.', 8*sizeof(char));

// 	printf("After ft_memset:  %s\n", str);
// 	printf("After memset:  %s\n", str1);
// 	return 0;
// }
