/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouis <rrouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/11 01:55:50 by rrouis            #+#    #+#             */
/*   Updated: 2015/11/30 16:01:05 by rrouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	dest = (char*)malloc(sizeof(src + 1));
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
