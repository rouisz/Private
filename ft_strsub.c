/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 14:32:36 by rrouis            #+#    #+#             */
/*   Updated: 2015/12/04 14:13:57 by rrouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*newstr;
	unsigned int	i;

	newstr = 0;
	if (s)
	{
		if ((int)(ft_strlen(s) - (start + 1)) >= 0)
		{
			newstr = malloc(sizeof(char) * (len + 1));
			if (newstr)
			{
				i = 0;
				while ((i < len) && (s[i] != '\0'))
				{
					newstr[i] = s[start + i];
					i++;
				}
				newstr[i] = '\0';
			}
		}
		return (newstr);
	}
	return (0);
}
