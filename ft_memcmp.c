/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 15:31:22 by rrouis            #+#    #+#             */
/*   Updated: 2015/12/04 15:54:13 by rrouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	char			*str1;
	char			*str2;

	i = 0;
	if (n && s1 && s2)
	{
		str1 = (char *)s1;
		str2 = (char *)s2;
		while ((i < n - 1)
		&& ((unsigned char)str1[i] == (unsigned char)str2[i]))
		{
			i++;
		}
		return ((unsigned char)str1[i] - (unsigned char)str2[i]);
	}
	return (0);
}
