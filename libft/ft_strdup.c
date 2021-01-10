/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 20:07:46 by artmende          #+#    #+#             */
/*   Updated: 2020/11/25 16:05:04 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcopy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src);
}

char		*ft_strdup(const char *src)
{
	char	*dest;
	char	*src_e;

	dest = malloc(sizeof(*src) * (1 + ft_strlen(src)));
	if (!dest)
		return (0);
	src_e = (char *)src;
	ft_strcopy(dest, src_e);
	return (dest);
}
