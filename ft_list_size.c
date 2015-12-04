/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 20:01:15 by rrouis            #+#    #+#             */
/*   Updated: 2015/12/04 20:03:39 by rrouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_list_size(t_list *begin_list)
{
	int count;

	count = 0;
	while ((begin_list)->next)
	{
		begin_list = begin_list->next;
		count++;
	}
	return (count);
}
