/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfebvay <mfebvay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 17:04:33 by mfebvay           #+#    #+#             */
/*   Updated: 2015/01/22 04:26:04 by mfebvay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = -1;
	while (++i < len)
		((char *)b)[i] = (unsigned char)c;
	return (b);
}
