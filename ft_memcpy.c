/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livliege <livliege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:20:28 by livliege          #+#    #+#             */
/*   Updated: 2023/10/28 18:40:45 by livliege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
       The  memcpy() function copies n bytes from memory area src to 
	   memory area dest.
       The memory areas must not overlap.  Use memmove(3) if the memory 
	   areas do overlap.

RETURN VALUE
       The memcpy() function returns a pointer to dest.
*/

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*dst1;
	const char	*src1;

	if (dst == NULL || src == NULL)
		return (NULL);
	i = 0;
	dst1 = (char *)dst;
	src1 = (const char *)src;
	while (i < n)
	{
		dst1[i] = src1[i];
		i++;
	}
	return (dst);
}

// #include <stdio.h>

// int main()
// {

//     int size = 25;
//     int size2 = 9;
//     int i = 0;

//     char src[] = "hallo ik ben Liath!";
//     char dest[size];

//     char src1[] = "hallo ik ben liath!";
//     char dest1[size];

//     int src2[] = {2,3,4,5,6,7,8,9,10};
//     int dest2[size2];

//     int src3[] = {11,12,13,14,15,16,17,18,19};
//     int dest3[size2];

//     printf("%s\n", (char *)ft_memcpy(dest, src, 20));
//     printf("%s\n", (char *)memcpy(dest1, src1, 20));

//     ft_memcpy(dest2, src2, (size2 *sizeof(int)));
//     memcpy(dest3, src3, (size2 *sizeof(int)));
//     while (i < size2)
//     {
//         printf("%d ", dest2[i]);
//         i++;
//     }
//     printf("\n");
//     i = 0;
//     while (i < size2)
//     {
//         printf("%d ", dest3[i]);
//         i++;
//     }
//     printf("\n");
//     return (0);
// }
