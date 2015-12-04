/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouis <rrouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 12:58:42 by rrouis            #+#    #+#             */
/*   Updated: 2015/12/04 17:58:59 by rrouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, const char *str)
{
	int	i;

	if (dest && str)
	{
		i = 0;
		while (str[i] != '\0')
		{
			dest[i] = str[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (dest);
}
