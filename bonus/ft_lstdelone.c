/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livliege <livliege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 16:22:36 by livliege          #+#    #+#             */
/*   Updated: 2023/10/28 19:15:10 by livliege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function name 		ft_lstdelone
Prototype 			void ft_lstdelone(t_list *lst, void (*del)(void*));
Turn in files 		-
Parameters 			lst: The node to free.
					del: The address of the function used to delete the content.
Return value 		None
External functs. 	free
Description 		Takes as a parameter a node and frees the memory of
					the node’s content using the function ’del’ given
					as a parameter and free the node. The memory of
					’next’ must not be freed.
*/
					
#include "libft.h"

void ft_lstdelone(t_list *head, void (*del)(void *))
{
}

// ft_lstdelone(head, &free);	this is for testing purposes