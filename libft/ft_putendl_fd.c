/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfebvay <mfebvay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 14:01:54 by mfebvay           #+#    #+#             */
/*   Updated: 2014/03/15 18:38:29 by mfebvay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putendl_fd(char const *s, int fd)
{
	int		len;

	if (!s)
		return ((int)write(fd, "(null)\n", 7));
	len = 0;
	while (s[len])
		len++;
	if ((len = (int)write(fd, s, len)) == -1)
		return (len);
	return (len + (int)write(fd, "\n", 1));
}
