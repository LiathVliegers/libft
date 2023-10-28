/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livliege <livliege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 16:22:41 by livliege          #+#    #+#             */
/*   Updated: 2023/10/28 19:26:31 by livliege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function name 		ft_lstmap
Prototype 			t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
Turn in files 		-
Parameters 			lst: The address of a pointer to a node.
					f: The address of the function used to iterate on the list.
					del: The address of the function used to delete the content of a node if needed.
Return value 		The new list.
					NULL if the allocation fails.
External functs. 	malloc, free
Description 		Iterates the list ’lst’ and applies the function
					’f’ on the content of each node. Creates a new
					list resulting of the successive applications of
					the function ’f’. The ’del’ function is used to
					delete the content of a node if needed.
*/
