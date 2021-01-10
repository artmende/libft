/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 13:45:07 by marvin            #+#    #+#             */
/*   Updated: 2020/11/30 10:21:29 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	c_e;
	unsigned char	*edit;

	c_e = (unsigned char)c;
	edit = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		edit[i] = c_e;
		i++;
	}
	return (s);
}
