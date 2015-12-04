/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 17:12:56 by rrouis            #+#    #+#             */
/*   Updated: 2015/11/30 17:29:51 by rrouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*dst_cpy;
	const char	*src_cpy;
	size_t		i;
	size_t		dlen;

	dst_cpy = dst;
	src_cpy = src;
	i = size;
	while (i-- != 0 && *dst_cpy != '\0')
		++dst_cpy;
	dlen = dst_cpy - dst;
	i = size - dlen;
	if (i == 0)
		return (dlen + ft_strlen(src_cpy));
	while (*src_cpy != '\0')
	{
		if (i != 1)
		{
			*dst_cpy++ = *src_cpy;
			--i;
		}
		++src_cpy;
	}
	*dst_cpy = '\0';
	return (dlen + (src_cpy - src));
}
