/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfebvay <mfebvay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 19:20:22 by mfebvay           #+#    #+#             */
/*   Updated: 2015/01/28 17:00:25 by mfebvay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void		*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*tmp;
	int		i;

	tmp = (char*)malloc(n * sizeof(char));
	i = -1;
	while (++i < (int)n)
		tmp[i] = ((char *)src)[i];
	while (n--)
		((char *)dst)[n] = tmp[n];
	free(tmp);
	return (dst);
}
