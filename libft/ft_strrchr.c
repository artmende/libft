/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 15:26:06 by marvin            #+#    #+#             */
/*   Updated: 2020/11/17 15:58:17 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	c_e;
	char	*s_e;

	c_e = (char)c;
	s_e = (char *)s;
	if (c == 0)
		return (&s_e[ft_strlen(s)]);
	i = ft_strlen(s) - 1;
	while (i >= 0)
	{
		if (s[i] == c_e)
			return (&s_e[i]);
		i--;
	}
	return (0);
}
