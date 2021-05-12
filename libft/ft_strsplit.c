/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milyass <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 16:04:58 by milyass           #+#    #+#             */
/*   Updated: 2018/10/27 18:49:29 by milyass          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_charz(const char *str, size_t i, char c)
{
	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

static	size_t	ft_wordz(const char *str, char c)
{
	size_t	words;
	int		check;
	int		i;

	i = 0;
	words = 0;
	check = 1;
	while (str[i])
	{
		if (str[i] == c)
			check = 1;
		else if (check == 1)
		{
			words++;
			check = 0;
		}
		i++;
	}
	return (words);
}

char			**ft_strsplit(char const *s, char c)
{
	unsigned int	i;
	unsigned int	j;
	char			**tab;

	i = 0;
	j = 0;
	if (!(s))
		return (NULL);
	if (!(tab = (char**)malloc(sizeof(char*) * (ft_wordz(s, c) + 1))))
		return (NULL);
	while (j < ft_wordz(s, c))
	{
		while (s[i] == c)
			i++;
		tab[j++] = ft_strsub(s, i, ft_charz(s + i, i, c));
		i += ft_charz(s + i, i, c);
	}
	tab[j] = NULL;
	return (tab);
}
