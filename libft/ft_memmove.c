/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milyass <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/15 17:52:59 by milyass           #+#    #+#             */
/*   Updated: 2018/10/27 18:39:38 by milyass          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*adst;
	char	*asrc;
	size_t	i;

	adst = (char *)dst;
	asrc = (char *)src;
	i = 0;
	if (asrc < adst)
	{
		while (len > 0)
		{
			adst[len - 1] = asrc[len - 1];
			len--;
		}
	}
	else
	{
		while (i < len)
		{
			adst[i] = asrc[i];
			i++;
		}
	}
	return (dst);
}
