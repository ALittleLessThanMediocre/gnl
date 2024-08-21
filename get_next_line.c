/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchappie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 09:20:36 by dchappie          #+#    #+#             */
/*   Updated: 2019/09/13 14:00:37 by dchappie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	get_line(int const fd, char *buff, char *store[fd])
{
	int		output;
	char	*tmp_store;

	while (!(ft_strchr(buff, '\n')) &&
			(output = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[output] = '\0';
		tmp_store = store[fd];
		store[fd] = ft_strjoin(tmp_store, buff);
		ft_strdel(&tmp_store);
	}
	ft_strdel(&buff);
	if (output == -1)
		return (-1);
	return (1);
}

int			get_next_line(int const fd, char **line)
{
	static char		*store[MAX_FD];
	char			*buff;
	int				output;
	char			*str;
	char			*tmp_store;

	buff = ft_strnew(BUFF_SIZE);
	if (fd < 0 || !line || !buff || fd > MAX_FD || read(fd, buff, 0))
		return (-1);
	if (!store[fd])
		store[fd] = ft_strnew(1);
	if ((output = get_line(fd, buff, store)) == -1)
		return (-1);
	if ((str = ft_strchr(store[fd], '\n')))
	{
		*line = ft_strsub(store[fd], 0, str - store[fd]);
		tmp_store = store[fd];
		store[fd] = ft_strdup(str + 1);
		ft_strdel(&tmp_store);
		return (1);
	}
	*line = ft_strdup(store[fd]);
	store[fd] = NULL;
	return (ft_strlen(*line) > 0 ? 1 : 0);
}
