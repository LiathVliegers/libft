/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livliege <livliege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 19:09:33 by livliege          #+#    #+#             */
/*   Updated: 2023/10/29 12:48:17 by livliege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function name       ft_strjoinS
Prototype           char *ft_strjoin(char const *s1, char const *s2);
Turn in files       -
Parameters 			s1: The prefix string.
					s2: The suffix string.
Return value 		The new string.
					NULL if the allocation fails.
External functs. 	malloc
Description 		Allocates (with malloc(3)) and returns a new
					string, which is the result of the concatenation
					of ’s1’ and ’s2’.
*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*str;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	str = (char *)malloc((sizeof(char) * (ft_strlen(s1) + ft_strlen(s2))) + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}

// # include <stdio.h>

// int main(void)
// {
//     char s1[] = "Hello! You are ";
//     char s2[] = "very smart!";
//     char *joinedstring = ft_strjoin(s1, s2);
//     if (joinedstring != NULL)
//         printf("%s\n", joinedstring);
//     return (0);
// }
