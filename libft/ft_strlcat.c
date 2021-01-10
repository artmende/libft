/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 15:43:49 by artmende          #+#    #+#             */
/*   Updated: 2020/11/17 17:05:06 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	shift;

	i = ft_strlen(dest);
	shift = i;
	if (shift >= size)
		return (size + ft_strlen(src));
	while (src[i - shift] && i < size - 1)
	{
		dest[i] = src[i - shift];
		i++;
	}
	dest[i] = 0;
	return (shift + ft_strlen(src));
}
