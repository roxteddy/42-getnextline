/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfebvay <mfebvay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 19:18:55 by mfebvay           #+#    #+#             */
/*   Updated: 2015/01/22 19:01:24 by mfebvay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t		i;

	i = -1;
	while (++i < n)
	{
		if ((((unsigned char*)dst)[i] = ((unsigned char*)src)[i])
			== (unsigned char)c)
			return (dst + i + 1);
	}
	return (NULL);
}
