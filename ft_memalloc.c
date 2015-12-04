/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 10:40:26 by rrouis            #+#    #+#             */
/*   Updated: 2015/12/01 10:59:22 by rrouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*to_return;

	to_return = malloc(size);
	if (to_return == NULL)
		return (NULL);
	ft_bzero(to_return, size);
	return (to_return);
}
