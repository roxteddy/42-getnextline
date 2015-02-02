/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfebvay <mfebvay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 19:34:30 by mfebvay           #+#    #+#             */
/*   Updated: 2015/01/28 18:12:36 by mfebvay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t		i;

	i = -1;
	while (++i < n && src[i])
		dst[i] = src[i];
	while (i < n)
		dst[i++] = '\0';
	return (dst);
}
