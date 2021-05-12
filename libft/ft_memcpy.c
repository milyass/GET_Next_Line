/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milyass <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 19:08:46 by milyass           #+#    #+#             */
/*   Updated: 2018/10/13 19:46:13 by milyass          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*adst;
	char	*asrc;
	size_t	i;

	adst = dst;
	asrc = (char *)src;
	i = 0;
	while (i < n)
	{
		adst[i] = asrc[i];
		i++;
	}
	return (dst);
}
