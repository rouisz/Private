/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 16:04:38 by rrouis            #+#    #+#             */
/*   Updated: 2015/12/03 16:08:52 by rrouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	getsize(int nb)
{
	int		nbcolonnes;

	nbcolonnes = 1;
	if (nb < 0)
	{
		nb = -nb;
		nbcolonnes++;
	}
	while (nb >= 10)
	{
		nb = nb / 10;
		nbcolonnes++;
	}
	return (nbcolonnes);
}

char		*ft_itoa(int nb)
{
	char	*str;
	int		nbcolonnes;

	if (nb == -2147483648)
		return (ft_strdup("-2147483648"));
	nbcolonnes = getsize(nb);
	if (nb < 0)
		nb = -nb;
	str = malloc(sizeof(char) * (nbcolonnes + 1));
	if (str)
	{
		str[0] = '0';
		str[nbcolonnes] = '\0';
		nbcolonnes--;
		while (nb > 0)
		{
			str[nbcolonnes] = (nb % 10) + 48;
			if ((nb < 10) && (nbcolonnes == 1))
				str[0] = '-';
			nb = nb / 10;
			nbcolonnes--;
		}
	}
	return (str);
}
