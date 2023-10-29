/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livliege <livliege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 16:22:39 by livliege          #+#    #+#             */
/*   Updated: 2023/10/29 17:37:20 by livliege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function name 		ft_lstsize
Prototype 			int ft_lstsize(t_list *lst);
Turn in files 		-
Parameters 			lst: The beginning of the list.
Return value 		The length of the list
External functs. 	None
Description 		Counts the number of nodes in a list.
*/

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last;

	if (lst == NULL)
		return (NULL);
	last = lst;
	while (last->next != NULL)
		last = last->next;
	return (last);
}
