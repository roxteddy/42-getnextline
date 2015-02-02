/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freecontent.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfebvay <mfebvay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/04 20:52:51 by mfebvay           #+#    #+#             */
/*   Updated: 2015/02/02 17:44:53 by mfebvay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_freecontent(void *content, size_t content_size)
{
	free(content);
	(void)content_size;
}
