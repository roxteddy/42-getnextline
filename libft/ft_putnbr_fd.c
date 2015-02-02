/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfebvay <mfebvay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:58:23 by mfebvay           #+#    #+#             */
/*   Updated: 2015/01/23 03:15:25 by mfebvay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_putnbr_fd(int nb, int fd)
{
	int		tmp[10];
	int		count;
	int		len;
	int		sign;

	len = ft_nbrlen(nb);
	count = 0;
	sign = 1;
	if (nb < 0)
	{
		sign = -1;
		ft_putchar_fd('-', fd);
	}
	while (nb > 9 || nb < -9)
	{
		tmp[count++] = nb % 10;
		nb /= 10;
	}
	tmp[count] = nb;
	while (count >= 0)
	{
		ft_putchar_fd('0' + tmp[count] * sign, fd);
		count--;
	}
	return (len);
}
