/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 19:08:08 by rrouis            #+#    #+#             */
/*   Updated: 2015/12/04 19:10:19 by rrouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] <= 90 && str[i] >= 65)
		{
			str[i] = str[i + 32];
		}
	}
	return (str);
}
