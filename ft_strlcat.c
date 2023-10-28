/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livliege <livliege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:51:01 by livliege          #+#    #+#             */
/*   Updated: 2023/10/28 18:35:32 by livliege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
strlcpy() and strlcat() take the full size of the buffer (not just the length) 
and guarantee to NUL-terminate the result (as long as size is larger than 0 or, 
in the case of strlcat(), as long as there is at least one byte free in dst).

The strlcpy() and strlcat() functions return the total length of the string they 
tried to create.
For strlcat() that means the initial length of dst plus the length of src.
*/

#include "libft.h"

char	*ft_strncat(char *dst, const char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dst[i] != '\0')
	{
		i++;
	}
	while (j < nb)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	extra_space;
	size_t	dst_len;
	size_t	src_len;

	if (dst == NULL || src == NULL)
		return (NULL);
	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size <= dst_len)
		return (size + src_len);
	extra_space = size - dst_len - 1;
	while (dst[i] != '\0')
		i++;
	if (src_len < extra_space)
		ft_strncat(dst + dst_len, src, src_len);
	else
		ft_strncat(dst + dst_len, src, extra_space);
	return (dst_len + src_len);
}
