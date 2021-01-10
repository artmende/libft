/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 11:34:39 by artmende          #+#    #+#             */
/*   Updated: 2021/01/10 14:24:58 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	The aim here was to reproduce the behavior of atoi(3).
**	Specifically, if the number in *str is outside the range of a long int,
**	atoi(3) returns 0 or -1.
**	(nbr > 9223372036854775807 or nbr < -9223372036854775808)
*/

int	ft_atoi(const char *str)
{
	int			i;
	int			j;
	int			minus;
	long int	result_l;

	i = 0;
	j = 0;
	minus = 1;
	result_l = 0;
	while (str[j] == ' ' || (str[j] >= 9 && str[j] <= 13))
		j++;
	if (str[i + j] == '-' || str[i + j] == '+')
	{
		if (str[i + j] == '-')
			minus = minus - 2;
		i++;
	}
	while (str[i + j] >= '0' && str[i + j] <= '9')
	{
		result_l = 10 * result_l + str[i + j] - '0';
		if (result_l < 0 || (i > 18 && minus == 1) || (i > 19 && minus == -1))
			return (minus == 1 ? -1 : 0);
		i++;
	}
	return (int)(minus * result_l);
}
