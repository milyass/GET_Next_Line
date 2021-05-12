/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milyass <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 13:54:11 by milyass           #+#    #+#             */
/*   Updated: 2018/10/26 17:41:28 by milyass          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*hay;
	char	*ned;
	int		i;
	int		j;

	i = 0;
	hay = (char *)haystack;
	ned = (char *)needle;
	if (hay[i] == '\0' && ned[i] == '\0')
		return (hay);
	while (hay[i] != '\0')
	{
		j = 0;
		while (hay[i] == ned[j] && hay[i] != '\0' && ned[j] != '\0')
		{
			i++;
			j++;
		}
		if (ned[j] == '\0')
			return (hay + i - j);
		else
			i = i - j;
		i++;
	}
	return (0);
}
