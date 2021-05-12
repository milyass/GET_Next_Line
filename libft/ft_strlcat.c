/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milyass <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/20 18:32:23 by milyass           #+#    #+#             */
/*   Updated: 2018/10/20 19:05:48 by milyass          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t length;
	size_t k;

	i = 0;
	j = 0;
	length = 0;
	k = 0;
	while (dest[i] != '\0')
	{
		length++;
		i++;
	}
	if (size > length)
		k = (size - length - 1);
	while (j < k && src[j] != '\0')
		dest[i++] = src[j++];
	dest[i] = '\0';
	if (size > length)
		return (length + ft_strlen(src));
	return (size + ft_strlen(src));
}
