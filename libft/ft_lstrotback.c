/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstrotback.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfebvay <mfebvay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/29 21:59:23 by mfebvay           #+#    #+#             */
/*   Updated: 2015/01/30 20:42:24 by mfebvay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstrotback(t_list **alst)
{
	t_list	*head;
	t_list	*current;

	current = *alst;
	if (!current || !current->next)
		return (*alst);
	while (current->next->next)
		current = current->next;
	head = current->next;
	current->next = NULL;
	head->next = *alst;
	*alst = head;
	return (*alst);
}
