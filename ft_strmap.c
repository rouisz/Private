/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 13:43:00 by rrouis            #+#    #+#             */
/*   Updated: 2015/12/04 13:31:08 by rrouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*newstr;

	if (s && f)
	{
		newstr = malloc(sizeof(char) * (ft_strlen(s) + 1));
		if (newstr)
		{
			if (f)
			{
				i = 0;
				while (s[i] != '\0')
				{
					newstr[i] = f(s[i]);
					i++;
				}
				newstr[i] = '\0';
			}
		}
		return (newstr);
	}
	return (0);
}
