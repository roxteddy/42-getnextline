/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfebvay <mfebvay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 21:51:45 by mfebvay           #+#    #+#             */
/*   Updated: 2015/01/28 18:12:53 by mfebvay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char	*str;
	size_t	i;

	if (!(str = (char *)malloc((size + 1) * sizeof(char))))
		return (NULL);
	i = -1;
	while (++i < size)
		str[i] = '\0';
	return (str);
}
