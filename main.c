/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchappie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 08:54:13 by dchappie          #+#    #+#             */
/*   Updated: 2019/09/12 16:19:26 by dchappie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		main(int argc, char **argv)
{
	int		fd;
	int		output;
	char	*line;

	while (--argc)
	{
		argv++;
		if ((fd = open(*argv, O_RDONLY)) < 0)
			fd = 0;
		while ((output = (get_next_line(fd, &line))) == 1)
		{
			ft_putendl(line);
			free(line);
		}
		free(line);
	}
	return (0);
}
