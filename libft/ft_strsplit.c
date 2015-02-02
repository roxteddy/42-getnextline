/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfebvay <mfebvay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/27 21:02:28 by mfebvay           #+#    #+#             */
/*   Updated: 2015/01/28 18:13:35 by mfebvay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int		count_words(char const *s, char c)
{
	int		count;
	int		i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static size_t	ft_splitlen(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**strtab;
	size_t	i;
	size_t	j;
	size_t	len;

	if (!(strtab = (char **)malloc((count_words(s, c) + 1) * sizeof(char *))))
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			len = ft_splitlen(s + i, c);
			strtab[j++] = ft_strsub(s, i, len);
			i += len;
		}
	}
	strtab[j] = NULL;
	return (strtab);
}
