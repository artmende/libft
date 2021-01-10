/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 13:45:16 by marvin            #+#    #+#             */
/*   Updated: 2020/11/15 14:35:15 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	unsigned int	i;
	char			*edit;

	edit = (char *)s;
	i = 0;
	while (i < n)
	{
		edit[i] = 0;
		i++;
	}
	return (s);
}
