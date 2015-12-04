/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 17:32:00 by rrouis            #+#    #+#             */
/*   Updated: 2015/11/30 17:33:43 by rrouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (s == NULL)
		return (NULL);
	if (c < 0 || c > 255 || c == '\0')
		return (char *)(s + ft_strlen(s));
	while (*s != (char)c)
	{
		++s;
		if (*s == '\0')
			return (NULL);
	}
	return (char *)s;
}
