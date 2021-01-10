/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 17:27:29 by artmende          #+#    #+#             */
/*   Updated: 2020/11/24 14:51:40 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		is_in_base(char str, const char *base)
{
	int	i;

	i = 0;
	while (base[i] != 0)
	{
		if (str == base[i])
			return (1);
		i++;
	}
	return (0);
}

static char		*malzero(void)
{
	char	*s0;

	s0 = malloc(sizeof(char));
	if (s0)
		s0[0] = 0;
	return (s0);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*res;

	if (!s1 || !set)
		return (0);
	i = 0;
	j = ft_strlen(s1) - 1;
	k = 0;
	while (is_in_base(s1[i], set))
		i++;
	while (is_in_base(s1[j], set))
		j--;
	if (j - i <= 0)
		return (malzero());
	res = malloc(sizeof(char) * (2 + (j - i)));
	if (res)
	{
		while (i++ <= j)
			res[k++] = s1[i - 1];
		res[k] = 0;
	}
	return (res);
}
