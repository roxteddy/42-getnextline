/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfebvay <mfebvay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 13:33:31 by mfebvay           #+#    #+#             */
/*   Updated: 2015/01/22 07:13:37 by mfebvay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char			*ft_itoa(int n)
{
	int		len;
	int		start;
	char	*str;

	len = ft_nbrlen(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = (char *)malloc((len + 1) * sizeof(char));
	start = 0;
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
		start++;
	}
	str[len] = '\0';
	while (--len >= start)
	{
		str[len] = n % 10 + '0';
		n /= 10;
	}
	return (str);
}
