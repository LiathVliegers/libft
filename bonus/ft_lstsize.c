/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livliege <livliege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 16:22:44 by livliege          #+#    #+#             */
/*   Updated: 2023/10/28 19:17:26 by livliege         ###   ########.fr       */
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
int	ft_lstsize(t_list *head)
{
	int		size;
	t_list	*count;

	if (head == NULL)
		return (NULL);
	count = head;
	size = 0;
	while (count->next != NULL)
	{
		count = count->next;
		size++;
	}
	return (size);
}
