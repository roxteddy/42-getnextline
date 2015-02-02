/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfebvay <mfebvay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/29 21:46:18 by mfebvay           #+#    #+#             */
/*   Updated: 2015/01/29 21:49:44 by mfebvay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t	ft_lstlen(t_list *alst)
{
	t_list	*current;
	size_t	len;

	len = 0;
	current = alst;
	while (current)
	{
		len++;
		current = current->next;
	}
	return (len);
}
