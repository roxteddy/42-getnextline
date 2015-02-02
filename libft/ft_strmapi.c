/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfebvay <mfebvay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/27 18:10:37 by mfebvay           #+#    #+#             */
/*   Updated: 2015/01/28 17:55:29 by mfebvay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	i = 0;
	while (s[i])
		i++;
	str = (char *)malloc((i + 1) * sizeof(char));
	str[i] = '\0';
	while (--i >= 0)
		str[i] = f(i, s[i]);
	return (str);
}
