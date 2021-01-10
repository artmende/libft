/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 10:20:11 by artmende          #+#    #+#             */
/*   Updated: 2020/11/16 15:05:30 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*ret;
	char			*ret_e;
	unsigned int	i;

	i = nmemb * size;
	ret = malloc(i);
	if (!ret)
		return (NULL);
	ret_e = (char *)ret;
	while (i)
	{
		ret_e[i - 1] = 0;
		i--;
	}
	return (ret);
}
