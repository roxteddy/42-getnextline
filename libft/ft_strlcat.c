/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfebvay <mfebvay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 19:37:26 by mfebvay           #+#    #+#             */
/*   Updated: 2015/01/23 01:50:03 by mfebvay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	cpy_len;
	size_t	src_len;

	dst_len = 0;
	while (dst[dst_len])
		dst_len++;
	src_len = 0;
	while (src[src_len])
		src_len++;
	if (size <= dst_len)
		return (src_len + size);
	if ((cpy_len = size - dst_len - 1) > src_len)
		cpy_len = src_len;
	dst[dst_len + cpy_len] = 0;
	while (cpy_len--)
		dst[dst_len + cpy_len] = src[cpy_len];
	return (dst_len + src_len);
}
