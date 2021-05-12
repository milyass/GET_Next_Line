/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milyass <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 17:14:34 by milyass           #+#    #+#             */
/*   Updated: 2018/10/27 18:49:09 by milyass          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_numcount(int n)
{
	int		cnt;

	cnt = 1;
	while (n)
	{
		n = n / 10;
		++cnt;
	}
	return (cnt);
}

static	char	*print_num_negative(int n)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = ft_numcount(n);
	if (!(str = (char *)malloc(sizeof(char) * (j + 1))))
		return (NULL);
	str[0] = '-';
	str[j] = '\0';
	n = n * -1;
	j--;
	while (i < j)
	{
		str[j] = (n % 10) + 48;
		n = n / 10;
		j--;
	}
	return (str);
}

static	char	*print_num_positive(int n)
{
	int		i;
	int		j;
	char	*str;
	int		h;

	i = 0;
	j = ft_numcount(n);
	if (!(str = (char *)malloc(sizeof(char) * (j))))
		return (NULL);
	else
	{
		h = j;
		while (i <= j - 2)
		{
			str[j - 2] = (n % 10) + 48;
			n = n / 10;
			j--;
		}
		str[h - 1] = '\0';
	}
	return (str);
}

char			*ft_itoa(int n)
{
	char	*str;

	if (n == 0)
	{
		if (!(str = (char *)malloc(sizeof(char) * 2)))
			return (NULL);
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	if (n > 0 && n <= 9)
	{
		if (!(str = (char *)malloc(sizeof(char) * 2)))
			return (NULL);
		str[0] = n + '0';
		str[1] = '\0';
		return (str);
	}
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
		str = print_num_negative(n);
	else
		str = print_num_positive(n);
	return (str);
}
