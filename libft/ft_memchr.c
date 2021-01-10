/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 13:46:19 by marvin            #+#    #+#             */
/*   Updated: 2020/11/30 14:02:57 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	c_e;
	unsigned char	*s_e;

	i = 0;
	c_e = (unsigned char)c;
	s_e = (unsigned char *)s;
	while (i < n)
	{
		if (s_e[i] == c_e)
			return (&s_e[i]);
		i++;
	}
	return (0);
}
