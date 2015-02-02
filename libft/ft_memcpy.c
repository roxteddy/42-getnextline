/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfebvay <mfebvay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 19:15:11 by mfebvay           #+#    #+#             */
/*   Updated: 2015/01/22 04:33:12 by mfebvay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	while (n--)
		((char*)dst)[n] = ((char*)src)[n];
	return (dst);
}
