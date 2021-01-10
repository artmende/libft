/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 11:16:44 by marvin            #+#    #+#             */
/*   Updated: 2020/11/17 15:55:19 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	c_e;
	char	*s_e;

	c_e = (char)c;
	s_e = (char *)s;
	i = 0;
	while (s[i])
	{
		if (s[i] == c_e)
			return (&s_e[i]);
		i++;
	}
	if (c == 0)
		return (&s_e[i]);
	return (0);
}
