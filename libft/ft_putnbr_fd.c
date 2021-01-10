/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artmende <artmende@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 16:43:54 by artmende          #+#    #+#             */
/*   Updated: 2020/11/20 17:02:57 by artmende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	i;
	char			temp[10];

	if (!n)
		write(fd, "0", 1);
	if (n < 0)
		write(fd, "-", 1);
	i = 0;
	while (n)
	{
		if (n > 0)
			temp[i++] = (n % 10) + '0';
		else
			temp[i++] = -(n % 10) + '0';
		n = n / 10;
	}
	while (i--)
		write(fd, &temp[i], 1);
}
