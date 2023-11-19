/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livliege <livliege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 15:32:52 by livliege          #+#    #+#             */
/*   Updated: 2023/11/03 19:03:59 by livliege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function name 		ft_strmapi
Prototype 			char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
Turn in files 		-
Parameters 			s: The string on which to iterate.
					f: The function to apply to each character.
Return value 		The string created from the successive applications of ’f’.
					Returns NULL if the allocation fails.
External functs. 	malloc
Description 		Applies the function ’f’ to each character of the
					string ’s’, and passing its index as first argument
					to create a new string (with malloc(3)) resulting
					from successive applications of ’f’.
*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (s == NULL || f == NULL)
		return (NULL);
	i = 0;
	str = ft_strdup(s);
	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		str[i] = f(i, str[i]);
		i++;
	}
	return (str);
	// ft_striteri
}

// char ft_touppercase (unsigned int i, char c)
// {
// 	i = 32;
//     if (c >= 'a' && c <= 'z')
//         return (c - i);
//     else
//         return (c);
// }

// int main(void)
// {
// 	char str[] = "This is the input string";
// 	unsigned int i = 0;

// 	char *result = ft_strmapi(str, ft_touppercase);
// 	while (result[i] != '\0')
// 	{
// 		printf("%c", result[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	return (0);
// }
