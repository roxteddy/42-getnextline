/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfebvay <mfebvay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/27 18:57:48 by mfebvay           #+#    #+#             */
/*   Updated: 2015/01/22 06:25:35 by mfebvay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (!(str = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	i = -1;
	while (++i < len)
		str[i] = s[start + i];
	str[i] = '\0';
	return (str);
}
