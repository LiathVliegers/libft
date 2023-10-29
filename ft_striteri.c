/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livliege <livliege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 16:43:27 by livliege          #+#    #+#             */
/*   Updated: 2023/10/29 16:05:39 by livliege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function name 		ft_striteri
Prototype 			void ft_striteri(char *s, void (*f)(unsigned int, char*));
Turn in files 		-
Parameters 			s: The string on which to iterate.
					f: The function to apply to each character.
Return value 		None
External functs. 	None
Description 		Applies the function ’f’ on each character of
					the string passed as argument, passing its index
					as first argument. Each character is passed by
					address to ’f’ to be modified if necessary.
*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}

// void ft_touppercase (unsigned int i, char *c)
// {
// 	i = 32;
//     if (*c >= 'a' && *c <= 'z')
//         *c = *c - i;
// }

// int main(void)
// {
// 	char str[] = "This is the input string";
// 	unsigned int i = 0;

// 	ft_striteri(str, ft_touppercase);
// 	while (str[i] != '\0')
// 	{
// 		printf("%c", str[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	return (0);
// }
