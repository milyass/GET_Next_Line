/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milyass <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 18:38:55 by milyass           #+#    #+#             */
/*   Updated: 2018/11/11 19:36:05 by milyass          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#include "get_next_line.h"

static	int		after_linebreak(char **str, int fd)
{
	int	i;

	i = 0;
	while (str[fd][i] != '\n' && str[fd][i])
		i++;
	return (i);
}

int				get_next_line(const int fd, char **line)
{
	static char		*str[4096];
	char			buf[BUFF_SIZE + 1];
	int				ret;
	int				i;

	if (fd < 0 || fd > 4096 || BUFF_SIZE <= 0 || !line)
		return (-1);
	if (str[fd] == NULL)
		str[fd] = ft_strnew(0);
	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		if (ret == -1)
			return (-1);
		buf[ret] = '\0';
		str[fd] = ft_strjoin(str[fd], buf);
		if (ft_strchr(str[fd], '\n'))
			break ;
	}
	i = after_linebreak(str, fd);
	if (ret == 0 && (str[fd] == NULL || str[fd][0] == '\0'))
		return (0);
	*line = ft_strsub(str[fd], 0, i);
	str[fd] = &str[fd][i] + 1;
	return (1);
}
