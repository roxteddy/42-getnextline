/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstrot.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfebvay <mfebvay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/29 21:55:35 by mfebvay           #+#    #+#             */
/*   Updated: 2015/01/30 20:42:05 by mfebvay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstrot(t_list **alst)
{
	t_list	*head;
	t_list	*current;

	head = *alst;
	current = *alst;
	if (!current || !current->next)
		return (*alst);
	*alst = current->next;
	while (current->next)
		current = current->next;
	current->next = head;
	head->next = NULL;
	return (*alst);
}
