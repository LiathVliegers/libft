/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livliege <livliege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 16:22:37 by livliege          #+#    #+#             */
/*   Updated: 2023/10/28 19:23:31 by livliege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Function name 		ft_lstiter
Prototype 			void ft_lstiter(t_list *lst, void (*f)(void *));
Turn in files 		-
Parameters 			lst: The address of a pointer to a node.
					f: The address of the function used to iterate on the list.
Return value 		None
External functs. 	None
Description 		Iterates the list ’lst’ and applies the function
					’f’ on the content of each node.
*/