/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpushback.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfebvay <mfebvay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/30 19:53:16 by mfebvay           #+#    #+#             */
/*   Updated: 2015/02/02 19:22:54 by mfebvay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstpushback(t_list **alst, t_list *new)
{
	t_list	*current;

	current = *alst;
	if (current)
	{
		while (current->next)
			current = current->next;
		current->next = new;
	}
	else
		*alst = new;
}
