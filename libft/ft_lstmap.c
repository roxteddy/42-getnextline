/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfebvay <mfebvay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/29 17:48:36 by mfebvay           #+#    #+#             */
/*   Updated: 2015/01/28 16:58:19 by mfebvay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*current;
	t_list	*ret;

	new = NULL;
	current = NULL;
	ret = NULL;
	if (!lst)
		return (NULL);
	while (lst)
	{
		new = f(lst);
		if (!ret)
			ret = new;
		if (current)
			current->next = new;
		current = new;
		lst = lst->next;
	}
	return (ret);
}
