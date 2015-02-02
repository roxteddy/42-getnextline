/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfebvay <mfebvay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 14:01:54 by mfebvay           #+#    #+#             */
/*   Updated: 2014/03/15 17:06:50 by mfebvay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putendl(char const *s)
{
	int		len;

	if (!s)
		return ((int)write(1, "(null)\n", 7));
	len = 0;
	while (s[len])
		len++;
	if ((len = (int)write(1, s, len)) == -1)
		return (len);
	return (len + (int)write(1, "\n", 1));
}
