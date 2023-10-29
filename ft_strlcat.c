/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livliege <livliege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:51:01 by livliege          #+#    #+#             */
/*   Updated: 2023/10/29 16:06:01 by livliege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
     The strlcpy() and strlcat() functions copy and concatenate strings re‐
     spectively.  They are designed to be safer, more consistent, and less er‐
     ror prone replacements for strncpy(3) and strncat(3).  Unlike those func‐
     tions, strlcpy() and strlcat() take the full size of the buffer (not just
     the length) and guarantee to NUL-terminate the result (as long as size is
     larger than 0 or, in the case of strlcat(), as long as there is at least
     one byte free in dst).  Note that a byte for the NUL should be included
     in size.  Also note that strlcpy() and strlcat() only operate on true “C”
     strings.  This means that for strlcpy() src must be NUL-terminated and
     for strlcat() both src and dst must be NUL-terminated.

     The strlcpy() function copies up to size - 1 characters from the NUL-ter‐
     minated string src to dst, NUL-terminating the result.

     The strlcat() function appends the NUL-terminated string src to the end
     of dst.  It will append at most size - strlen(dst) - 1 bytes, NUL-termi‐
     nating the result.

RETURN VALUES
     The strlcpy() and strlcat() functions return the total length of the
     string they tried to create.  For strlcpy() that means the length of src.
     For strlcat() that means the initial length of dst plus the length of
     src.  While this may seem somewhat confusing, it was done to make trunca‐
     tion detection simple.

     Note, however, that if strlcat() traverses size characters without find‐
     ing a NUL, the length of the string is considered to be size and the des‐
     tination string will not be NUL-terminated (since there was no space for
     the NUL).  This keeps strlcat() from running off the end of a string.  In
     practice this should not happen (as it means that either size is incor‐
     rect or that dst is not a proper “C” string).  The check exists to pre‐
     vent potential security problems in incorrect code.
*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] != '\0' && i < size)
		i++;
	while ((src[j] != '\0') && ((i + j + 1) < size))
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i != size)
		dst[i + j] = '\0';
	return (i + strlen(src));
}

// OLD VERSION:
// char	*ft_strncat(char *dst, const char *src, unsigned int nb)
// {
// 	unsigned int	i;
// 	unsigned int	j;

// 	i = 0;
// 	j = 0;
// 	while (dst[i] != '\0')
// 	{
// 		i++;
// 	}
// 	while (j < nb)
// 	{
// 		dst[i] = src[j];
// 		i++;
// 		j++;
// 	}
// 	dst[i] = '\0';
// 	return (dst);
// }

// size_t	ft_strlcat(char *dst, const char *src, size_t size)
// {
// 	size_t	i;
// 	size_t	extra_space;
// 	size_t	dst_len;
// 	size_t	src_len;

// 	if (dst == NULL || src == NULL)
// 		return (NULL);
// 	i = 0;
// 	dst_len = ft_strlen(dst);
// 	src_len = ft_strlen(src);
// 	if (size <= dst_len)
// 		return (size + src_len);
// 	extra_space = size - dst_len - 1;
// 	while (dst[i] != '\0')
// 		i++;
// 	if (src_len < extra_space)
// 		ft_strncat(dst + dst_len, src, src_len);
// 	else
// 		ft_strncat(dst + dst_len, src, extra_space);
// 	return (dst_len + src_len);
// }
