/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 11:33:17 by artmende          #+#    #+#             */
/*   Updated: 2020/11/23 15:44:25 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*s;

	if (!new || !alst)
		return ;
	s = *alst;
	if (!s)
	{
		*alst = new;
		return ;
	}
	while (s->next)
		s = s->next;
	s->next = new;
	new->next = 0;
}
