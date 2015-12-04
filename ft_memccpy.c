/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 13:39:23 by rrouis            #+#    #+#             */
/*   Updated: 2015/11/30 15:51:44 by rrouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*ptr1;
	char	*ptr2;
	size_t	i;

	if (dest == NULL || src == NULL)
		return (NULL);
	ptr1 = (char*)dest;
	ptr2 = (char*)src;
	i = 0;
	while (i < n)
	{
		if (ptr2[i] == (char)c)
		{
			ptr1[i] = ptr2[i];
			return (&(ptr1[i + 1]));
		}
		ptr1[i] = ptr2[i];
		++i;
	}
	return (NULL);
}
