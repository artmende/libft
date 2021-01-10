/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 13:45:28 by marvin            #+#    #+#             */
/*   Updated: 2020/11/19 17:57:54 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*dest_e;
	unsigned char	*src_e;

	if (!dest && !src)
		return (0);
	i = 0;
	dest_e = (unsigned char *)dest;
	src_e = (unsigned char *)src;
	while (i < n)
	{
		dest_e[i] = src_e[i];
		i++;
	}
	return (dest);
}
