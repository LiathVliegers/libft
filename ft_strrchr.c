/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livliege <livliege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 20:07:31 by livliege          #+#    #+#             */
/*   Updated: 2023/10/25 20:16:11 by livliege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
       The strchr() function returns a pointer to the first occurrence of 
	   the character c in the string s.
       The strrchr() function returns a pointer to the last occurrence of 
	   the character c in the string s.
       Here "character" means "byte"; these functions do not work with 
	   wide or multibyte characters.

RETURN VALUE
       The strchr() and strrchr() functions return a pointer to the matched 
	   character or  NULL  if  the  character  is  not
       found.   The  terminating null byte is considered part of the string, 
	   so that if c is specified as '\0', these func‐
       tions return a pointer to the terminator.
*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				len;
	unsigned char	ch;

	ch = c;
	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == ch)
			return ((char *)&s[len]);
		len--;
	}
	return (NULL);
}
