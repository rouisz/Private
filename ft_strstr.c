/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrouis <rrouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/08 20:49:36 by rrouis            #+#    #+#             */
/*   Updated: 2015/12/04 13:37:01 by rrouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int n;
	int c;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		n = i;
		c = 0;
		while (str[n] == to_find[c])
		{
			n++;
			c++;
			if (to_find[c] == '\0')
			{
				return (&str[i]);
			}
		}
		i++;
	}
	return (0);
}
