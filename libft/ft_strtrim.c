/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfebvay <mfebvay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/27 19:48:12 by mfebvay           #+#    #+#             */
/*   Updated: 2015/01/28 18:14:55 by mfebvay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strtrim(char const *s)
{
	size_t	len;
	size_t	start;
	size_t	i;
	char	*str;

	len = 0;
	while (s[len])
		len++;
	i = len;
	while (--i && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		len--;
	start = 0;
	while (start < len && (s[start] == ' '
	|| s[start] == '\n' || s[start] == '\t'))
		start++;
	len -= start;
	if (!(str = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	i = -1;
	while (++i < len)
		str[i] = s[start + i];
	str[i] = '\0';
	return (str);
}
