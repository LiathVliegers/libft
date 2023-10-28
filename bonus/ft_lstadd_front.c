/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livliege <livliege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 16:22:26 by livliege          #+#    #+#             */
/*   Updated: 2023/10/28 19:16:26 by livliege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function name 		ft_lstadd_front
Prototype 			void ft_lstadd_front(t_list **lst, t_list *new);
Turn in files 		-
Parameters 			lst:	The address of a pointer to the first link of a list.
					new:	The address of a pointer to the node to be 
							added to the list.
Return value 		None
External functs. 	None
Description 		Adds the node ’new’ at the beginning of the list.
*/

#include "libft.h"

// CHANGE HEAD BACK TO lst!!!!!!!!!!!!!!!
void	ft_lstadd_front(t_list **head, t_list *new)
{
	t_list	*new_node;

	if (head == NULL || new == NULL)
		return ;
	new_node = new;
	if (new_node == NULL)
		return ;
	new_node->next = *head;
	*head = new_node;
}
