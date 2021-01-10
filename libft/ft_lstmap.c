/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 16:26:48 by artmende          #+#    #+#             */
/*   Updated: 2020/11/25 14:05:24 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*new_list;

	new_list = 0;
	while (lst && (*f))
	{
		new_node = ft_lstnew((*f)(lst->content));
		if (!new_node)
		{
			if (!new_list)
				return (0);
			else
			{
				ft_lstclear(&new_list, (*del));
				return (0);
			}
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
