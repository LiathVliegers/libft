/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livliege <livliege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 16:22:33 by livliege          #+#    #+#             */
/*   Updated: 2023/10/28 19:25:16 by livliege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function name 		ft_lstclear
Prototype 			void ft_lstclear(t_list **lst, void (*del)(void*));
Turn in files 		-
Parameters 			lst: 	The address of a pointer to a node.
					del: 	The address of the function used to delete
							the content of the node.
Return value 		None
External functs. 	free
Description 		Deletes and frees the given node and every 
					successor of that node, using the function ’del’
					and free(3).
					Finally, the pointer to the list must be set to NULL.
*/