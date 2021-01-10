/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 13:45:44 by marvin            #+#    #+#             */
/*   Updated: 2020/11/25 14:34:12 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*dest_e;
	unsigned char	*src_e;

	i = 0;
	dest_e = (unsigned char *)dest;
	src_e = (unsigned char *)src;
	while (i < n)
	{
		if (src_e[i] == (unsigned char)c)
		{
			dest_e[i] = src_e[i];
			return (&dest_e[i + 1]);
		}
		dest_e[i] = src_e[i];
		i++;
	}
	return (0);
}
