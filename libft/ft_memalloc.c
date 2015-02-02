/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfebvay <mfebvay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 15:04:58 by mfebvay           #+#    #+#             */
/*   Updated: 2015/01/22 07:25:06 by mfebvay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void	*ptr;
	size_t	i;

	if (!(ptr = malloc(size)))
		return (NULL);
	i = -1;
	while (++i < size)
		((char *)ptr)[i] = 0;
	return (ptr);
}
