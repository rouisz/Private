/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 10:43:25 by rrouis            #+#    #+#             */
/*   Updated: 2015/11/30 15:57:38 by rrouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			count;
	unsigned char	*toto;

	if (len == 0)
		return (b);
	count = 0;
	toto = (unsigned char *)b;
	while (count < len)
	{
		toto[count] = (unsigned char)c;
		++count;
	}
	return (b);
}
