/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 18:09:34 by rrouis            #+#    #+#             */
/*   Updated: 2015/12/03 13:07:57 by rrouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char			*newstr;
	unsigned int	i;

	newstr = malloc(sizeof(char) * size);
	if (newstr)
	{
		i = 0;
		while (i < size)
		{
			newstr[i] = '\0';
			i++;
		}
		return (newstr);
	}
	return (0);
}
