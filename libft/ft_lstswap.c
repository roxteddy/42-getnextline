/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfebvay <mfebvay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/30 19:27:06 by mfebvay           #+#    #+#             */
/*   Updated: 2015/01/30 20:42:32 by mfebvay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstswap(t_list **alst)
{
	t_list	*current;
	t_list	*tmp;

	current = *alst;
	if (!current || !current->next)
		return (*alst);
	tmp = current->next->next;
	current->next->next = current;
	*alst = current->next;
	current->next = tmp;
	return (*alst);
}
