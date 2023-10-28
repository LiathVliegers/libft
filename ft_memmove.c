/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livliege <livliege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 14:36:17 by livliege          #+#    #+#             */
/*   Updated: 2023/10/28 18:40:33 by livliege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
       The  memmove() function copies n bytes from memory area src 
	   to memory area dest.  
       The memory areas may overlap: copying takes place as though the 
	   bytes in src are 
       first copied into a temporary array that does not overlap src or dest, 
       and the bytes are then  copied  from the temporary array to dest.

RETURN VALUE
       The memmove() function returns a pointer to dest.
*/

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	char			*dest1;
	const char		*src1;

	if (dest == NULL || src == NULL)
		return (NULL);
	dest1 = (char *)dest;
	src1 = (const char *)src;
	if (src == dest || n == 0)
		return (dest);
	i = 0;
	while (i < n && dest != src)
	{
		if (dest1 < src1)
		{
			dest1[i] = src1[i];
			i++;
		}
		if (dest1 > src1)
		{
			i++;
			dest1[n - i] = src1[n - i];
		}
	}
	return (dest);
}

// #include <stdio.h>

// int main()
// {
// 	char array[] = "I love chocolate!";
// 	char dest[50] = "Hellloooooow ";

// 	char array1[] = "I love chocolate!";
// 	char dest1[50] = "Hellloooooow ";

// 	printf("ft_memmove: %s\n", (char *)ft_memmove(dest + 13, array, 18));
// 	printf("memmove: %s\n", (char *)memmove(dest1 + 13, array1, 18));

// 	char array2[] = "I love chocolate!";
// 	char dest2[50] = "Hellloooooow ";

// 	char array3[] = "I love chocolate!";
// 	char dest3[50] = "Hellloooooow ";

// 	ft_memmove(dest2 + 13, array2, 18);
// 	memmove(dest3 + 13, array3, 18);

// 	printf("ft_memmove: %s\n", dest2);
// 	printf("memmove: %s\n", dest3);

// 	int arr1[] = {9,9,9,9,9,9,9,9};
// 	int arr2[] = {1,1,1,1,1,1,1,1};

// 	int arr3[] = {9,9,9,9,9,9,9,9};
// 	int arr4[] = {1,1,1,1,1,1,1,1};

// 	int i = 0;

// 	ft_memmove(arr2, arr1, (4 *sizeof(int)));
//     memmove(arr4, arr3, (4 *sizeof(int)));

// 	printf("ft_memmove: ");
// 	while (i < 8)
//     {
//         printf("%d ", arr2[i]);
//         i++;
//     }
//     printf("\n");
//     i = 0;

// 	printf("memmove: ");
//     while (i < 8)
//     {
//         printf("%d ", arr4[i]);
//         i++;
//     }
//     printf("\n");

// 	return (0);
// }