/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livliege <livliege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 16:22:39 by livliege          #+#    #+#             */
/*   Updated: 2023/10/28 19:20:10 by livliege         ###   ########.fr       */
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

// CHANGE HEAD BACK TO lst!!!!!!!!!!!!!!!
t_list	*ft_lstlast(t_list *head)
{
	t_list	*last;
	
	if (head == NULL)
		return (NULL);
	last = head;
	while (last->next != NULL)
		last = last->next;
	return (last);
}
