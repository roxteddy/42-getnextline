/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfebvay <mfebvay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 19:40:45 by mfebvay           #+#    #+#             */
/*   Updated: 2015/01/28 18:13:59 by mfebvay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	int		j;

	if (!(*s2))
		return ((char *)s1);
	i = -1;
	while (s1[++i])
	{
		j = 0;
		while (s1[i + j] == s2[j] && s2[j])
			j++;
		if (!s2[j])
			return ((char *)s1 + i);
	}
	return (NULL);
}
