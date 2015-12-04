/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 13:56:31 by rrouis            #+#    #+#             */
/*   Updated: 2015/12/04 14:16:32 by rrouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*newstr;

	if (s && f)
	{
		newstr = malloc(sizeof(char) * (ft_strlen(s) + 1));
		if (newstr)
		{
			i = 0;
			while (s[i] != '\0')
			{
				newstr[i] = f(i, s[i]);
				i++;
			}
			newstr[i] = '\0';
		}
		return (newstr);
	}
	return (0);
}
