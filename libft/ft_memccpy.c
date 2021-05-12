/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milyass <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 15:11:30 by milyass           #+#    #+#             */
/*   Updated: 2018/10/26 17:38:23 by milyass          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*adst;
	unsigned char	*asrc;
	size_t			i;

	adst = (unsigned char *)dst;
	asrc = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		adst[i] = asrc[i];
		if (adst[i] == (unsigned char)c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
