/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 15:31:03 by rrouis            #+#    #+#             */
/*   Updated: 2015/12/03 15:56:51 by rrouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	wordlen(char const *str, char c, int i)
{
	size_t	rslt;

	rslt = 0;
	while ((str[i + rslt] != '\0') && (str[i + rslt] != c))
	{
		rslt++;
	}
	return (rslt);
}

static int		nbwords(char const *str, char c)
{
	int	i;
	int	rslt;

	i = 0;
	rslt = 0;
	while (str[i] != '\0')
	{
		while (str[i] == c)
		{
			i++;
		}
		if (str[i] != '\0')
		{
			rslt++;
			while ((str[i] != c) && (str[i] != '\0'))
			{
				i++;
			}
		}
	}
	return (rslt);
}

static char		**ft_splitstr(char const *str, char c)
{
	int		i;
	int		nb;
	char	**tab;

	nb = nbwords(str, c);
	tab = (char **)malloc(sizeof(char *) * (nb + 1));
	if (tab)
	{
		i = 0;
		nb = 0;
		while (str[i] != '\0')
		{
			while (str[i] == c)
				i++;
			tab[nb] = ft_strsub(str, (unsigned int)i, wordlen(str, c, i));
			if (wordlen(str, c, i))
				nb++;
			i = i + wordlen(str, c, i);
		}
		tab[nb] = 0;
	}
	return (tab);
}

char			**ft_strsplit(char const *str, char c)
{
	if (!str)
	{
		return (0);
	}
	return (ft_splitstr(str, c));
}
