/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfebvay <mfebvay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 19:41:46 by mfebvay           #+#    #+#             */
/*   Updated: 2015/01/23 02:22:13 by mfebvay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	if (!(*s2))
		return ((char *)s1);
	i = 0;
	while (i < n && s1[i])
	{
		j = 0;
		while (s2[j] && s1[i + j] == s2[j] && j + i < n)
			j++;
		if (!s2[j])
			return (((char *)s1) + i);
		i++;
	}
	return (NULL);
}
