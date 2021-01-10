/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 15:22:00 by artmende          #+#    #+#             */
/*   Updated: 2020/11/19 18:15:35 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	i;
	char			*join;

	if (!s1 || !s2)
		return (0);
	i = 0;
	join = malloc(sizeof(char) * (1 + ft_strlen(s1) + ft_strlen(s2)));
	if (!join)
		return (0);
	while (i < ft_strlen(s1))
	{
		join[i] = s1[i];
		i++;
	}
	while (i < ft_strlen(s1) + ft_strlen(s2))
	{
		join[i] = s2[i - ft_strlen(s1)];
		i++;
	}
	join[i] = 0;
	return (join);
}
