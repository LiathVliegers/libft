/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livliege <livliege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 19:09:23 by livliege          #+#    #+#             */
/*   Updated: 2023/10/29 10:48:56 by livliege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
       These  functions  check  whether c, which must have the value of an un‐
       signed char or EOF, falls into a certain character class  according  to
       the  specified  locale.

isprint()
        checks for any printable character including space.

RETURN VALUE
       The  values  returned  are  nonzero  if  the character c falls into the
       tested class, and zero if not.
*/

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (16384);
	else
		return (0);
}
