/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livliege <livliege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:51:06 by livliege          #+#    #+#             */
/*   Updated: 2023/10/25 20:12:40 by livliege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
strlcpy() and strlcat() take the full size of the buffer (not just the length) 
and guarantee to NUL-terminate the result (as long as size is larger than 0.

return the total length of the string they tried to create.  
For strlcpy() that means the length of src.  
*/

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if (i == size)
		dst[i - 1] = '\0';
	else
		dst[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}
