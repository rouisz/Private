/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 18:29:17 by rrouis            #+#    #+#             */
/*   Updated: 2015/12/04 18:30:53 by rrouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*elem;
	t_list	*prev_elem;

	new = NULL;
	if (lst)
	{
		new = (*f)(lst);
		prev_elem = new;
		lst = lst->next;
		while (lst)
		{
			elem = (*f)(lst);
			prev_elem->next = elem;
			prev_elem = elem;
			lst = lst->next;
		}
		prev_elem->next = NULL;
	}
	return (new);
}
