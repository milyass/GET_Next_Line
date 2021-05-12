/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milyass <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 15:27:12 by milyass           #+#    #+#             */
/*   Updated: 2018/10/26 17:51:48 by milyass          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *fresh;

	if (!(s))
		return (NULL);
	if (!(fresh = ft_memalloc(len + 1)))
		return (NULL);
	ft_strncpy(fresh, (s + start), len);
	return (fresh);
}
