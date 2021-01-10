/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 13:44:00 by marvin            #+#    #+#             */
/*   Updated: 2020/11/22 16:37:00 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_e;

	if (!dest && !src)
		return (0);
	dest_e = (unsigned char *)dest;
	if (((char *)dest - (char *)src) > 0)
	{
		dest_e = dest_e + n;
		while (dest != dest_e && n)
		{
			dest_e--;
			*dest_e = *(dest_e - ((char *)dest - (char *)src));
		}
	}
	if (((char *)dest - (char *)src) < 0)
		while (n)
		{
			*dest_e = *(dest_e - ((char *)dest - (char *)src));
			dest_e++;
			n--;
		}
	return (dest);
}
