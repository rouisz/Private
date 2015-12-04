/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 15:14:43 by rrouis            #+#    #+#             */
/*   Updated: 2015/12/03 15:29:39 by rrouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbwhitespace(const char *str, int start, int facteur)
{
	int	i;

	i = 0;
	while (((str[start + i] == ' ') || (str[start + i] == '\n')
			|| (str[start + i] == '\t')) && (str[start + i] != '\0')
			&& (start + i >= 0))
	{
		i = i + facteur;
	}
	return (i * facteur);
}

char		*ft_strtrim(const char *str)
{
	int		len;
	int		nbend;
	int		nbbegin;
	char	*newstr;

	if (!str)
		newstr = 0;
	if (str)
	{
		nbbegin = ft_nbwhitespace(str, 0, 1);
		if (ft_strlen(str) != 0)
		{
			nbend = ft_nbwhitespace(str, ft_strlen(str) - 1, -1);
			len = ft_strlen(str) - (nbbegin + nbend);
		}
		if (ft_strlen(str) == 0 || len < 0)
		{
			newstr = malloc(sizeof(char));
			if (newstr)
				newstr[0] = '\0';
		}
		else
			newstr = ft_strsub(str, (unsigned int)nbbegin, len);
	}
	return (newstr);
}
