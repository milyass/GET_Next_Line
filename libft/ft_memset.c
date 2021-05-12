/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milyass <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 17:59:42 by milyass           #+#    #+#             */
/*   Updated: 2018/10/13 18:23:01 by milyass          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t ln)
{
	unsigned char	*k;
	size_t			i;

	k = b;
	i = 0;
	while (i < ln)
	{
		k[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
