/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 17:35:12 by rrouis            #+#    #+#             */
/*   Updated: 2015/11/30 17:50:39 by rrouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	if (s == NULL)
		return (NULL);
	i = ft_strlen(s);
	if (c < 0 || c > 255 || c == '\0')
		return (char *)(s + i);
	while (s[i] != (char)c && i >= 0)
		--i;
	if (i < 0)
		return (NULL);
	return (char *)(s + i);
}
