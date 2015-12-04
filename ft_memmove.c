/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 14:50:33 by rrouis            #+#    #+#             */
/*   Updated: 2015/12/03 14:15:05 by rrouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*strtemp;

	strtemp = malloc(sizeof(char) * (len + 1));
	if (strtemp)
	{
		strtemp = ft_memcpy(strtemp, src, len);
		dst = ft_memcpy(dst, strtemp, len);
		free(strtemp);
	}
	return (dst);
}
