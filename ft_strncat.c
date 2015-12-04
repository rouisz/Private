/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 16:36:08 by rrouis            #+#    #+#             */
/*   Updated: 2015/11/30 17:00:07 by rrouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t nb)
{
	size_t	i;
	size_t	j;

	if (dest == NULL || src == NULL)
		return (NULL);
	i = ft_strlen(dest);
	j = 0;
	while (src[j] != '\0' && j < nb)
	{
		dest[i + j] = src[j];
		++j;
	}
	dest[i + j] = '\0';
	return (dest);
}
