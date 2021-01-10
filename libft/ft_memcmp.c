/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 10:35:26 by marvin            #+#    #+#             */
/*   Updated: 2020/11/15 14:35:26 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*s1_e;
	unsigned char	*s2_e;

	if (n == 0)
		return (0);
	i = 0;
	s1_e = (unsigned char *)s1;
	s2_e = (unsigned char *)s2;
	while (i < n - 1 && s1_e[i] == s2_e[i])
		i++;
	return (s1_e[i] - s2_e[i]);
}
