/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livliege <livliege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 16:22:23 by livliege          #+#    #+#             */
/*   Updated: 2023/10/28 19:21:00 by livliege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function name 		ft_lstadd_back
Prototype 			void ft_lstadd_back(t_list **lst, t_list *new);
Turn in files 		-
Parameters 			lst: The address of a pointer to the first link of a list.
					new: The address of a pointer to the node to be 
					added to the list.
Return value 		None
External functs. 	None
Description 		Adds the node ’new’ at the end of the list.
*/

#include "libft.h"

// CHANGE HEAD BACK TO lst!!!!!!!!!!!!!!!
void	ft_lstadd_back(t_list **head, t_list *new)
{
	t_list	*new_node;
	t_list	*last;

	if (head == NULL || new == NULL)
		return ;
	new_node = new;
	if (*head == NULL)
	{
		*head = new_node;
		return ;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new_node;
		return ;
	}
}
