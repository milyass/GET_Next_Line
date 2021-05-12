/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milyass <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 14:41:57 by milyass           #+#    #+#             */
/*   Updated: 2018/10/20 14:36:18 by milyass          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*hay;
	char	*ned;
	size_t	i;
	size_t	j;

	i = 0;
	hay = (char *)haystack;
	ned = (char *)needle;
	while (hay[i] != '\0' && i < len)
	{
		j = 0;
		while (hay[i] == ned[j] && hay[i] != '\0' && ned[j] != '\0' && i < len)
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
