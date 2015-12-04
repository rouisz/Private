/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 15:19:13 by rrouis            #+#    #+#             */
/*   Updated: 2015/12/04 15:39:10 by rrouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char			*rslt;
	unsigned int	i;

	if (s)
	{
		i = 0;
		rslt = (char *)s;
		while (i < n)
		{
			if ((unsigned char)rslt[i] == (unsigned char)c)
			{
				rslt = rslt + i;
				return (rslt);
			}
			i++;
		}
	}
	return (0);
}
