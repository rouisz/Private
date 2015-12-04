/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 12:35:00 by rrouis            #+#    #+#             */
/*   Updated: 2015/12/04 13:35:05 by rrouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*ptr1;
	char		*ptr2;
	size_t		i;

	if (dest == NULL || src == NULL)
		return (NULL);
	ptr1 = (char*)dest;
	ptr2 = (char*)src;
	i = 0;
	while (i < n)
	{
		ptr1[i] = ptr2[i];
		++i;
	}
	return (dest);
}
