/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouis <rrouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/08 22:51:57 by rrouis            #+#    #+#             */
/*   Updated: 2015/12/04 13:48:05 by rrouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	if (!s1 || !s2 || n == 0)
	{
		return (0);
	}
	i = 0;
	while (((unsigned char)s1[i] == (unsigned char)s2[i])
		&& (s1[i] != '\0') && (i < n - 1))
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
