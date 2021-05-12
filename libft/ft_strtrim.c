/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milyass <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 20:06:45 by milyass           #+#    #+#             */
/*   Updated: 2018/10/26 17:53:24 by milyass          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*p;
	size_t	j;
	size_t	i;

	if (!(s))
		return (NULL);
	i = 1;
	p = ft_strdup(s);
	if (!p)
		return (NULL);
	while (*p == ' ' || *p == '\n' || *p == '\t')
		p++;
	j = ft_strlen(p) - 1;
	while (p[j] == ' ' || p[j] == '\n' || p[j] == '\t')
		j--;
	p[++j] = '\0';
	return (ft_strdup(p));
}
