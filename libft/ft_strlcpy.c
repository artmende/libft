/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 15:49:26 by artmende          #+#    #+#             */
/*   Updated: 2020/11/30 11:50:33 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int i;

	i = 0;
	if (!size)
		return (ft_strlen(src));
	if (size > ft_strlen(src))
	{
		while (src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = 0;
		return (ft_strlen(src));
	}
	i = 0;
	while (i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (ft_strlen(src));
}
