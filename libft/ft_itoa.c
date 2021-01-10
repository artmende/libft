/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 16:13:26 by artmende          #+#    #+#             */
/*   Updated: 2020/11/19 17:57:06 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	size_nbr(int n)
{
	int		i;
	int		sav;

	i = 0;
	sav = n;
	while (n)
	{
		n = n / 10;
		i++;
	}
	if (sav < 0)
		return (i + 2);
	else
		return (i + 1);
}

static char	*itoa_p(int n)
{
	int		i;
	char	*res;

	i = size_nbr(n) - 2;
	res = malloc(sizeof(char) * size_nbr(n));
	if (!res)
		return (0);
	res[size_nbr(n) - 1] = 0;
	while (n)
	{
		res[i] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	return (res);
}

static char	*itoa_n(int n)
{
	int		i;
	char	*res;

	i = size_nbr(n) - 2;
	res = malloc(sizeof(char) * size_nbr(n));
	if (!res)
		return (0);
	res[size_nbr(n) - 1] = 0;
	while (n)
	{
		res[i] = -(n % 10) + '0';
		n = n / 10;
		i--;
	}
	res[i] = '-';
	return (res);
}

char		*ft_itoa(int n)
{
	char	*res;

	if (!n)
	{
		res = malloc(sizeof(char) * 2);
		if (!res)
			return (0);
		res[0] = '0';
		res[1] = 0;
		return (res);
	}
	else if (n < 0)
		return (itoa_n(n));
	else
		return (itoa_p(n));
}
