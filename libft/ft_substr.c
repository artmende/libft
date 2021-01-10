/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 14:11:44 by artmende          #+#    #+#             */
/*   Updated: 2020/11/27 17:00:49 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	imax;
	char			*sub;

	if (!s)
		return (0);
	i = -1;
	imax = ft_strlen(s);
	if (start > imax)
	{
		if (!(sub = malloc(sizeof(char))))
			return (0);
		sub[0] = 0;
		return (sub);
	}
	if (start + len > imax)
		sub = malloc(sizeof(char) * (1 + imax - start));
	else
		sub = malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (0);
	while (++i < len && start + i < imax)
		sub[i] = s[i + start];
	sub[i] = 0;
	return (sub);
}
