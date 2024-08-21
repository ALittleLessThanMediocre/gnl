/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchappie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 09:18:12 by dchappie          #+#    #+#             */
/*   Updated: 2019/09/06 14:48:53 by dchappie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hy, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;

	if (!*needle)
		return ((char *)hy);
	i = 0;
	while (hy[i] && i < len)
	{
		if (hy[i] == *needle)
		{
			j = 0;
			while (needle[j] && hy[i + j] && i + j < len)
			{
				if (needle[j] != hy[i + j])
					break ;
				j++;
			}
			if (!needle[j])
				return ((char *)hy + i);
		}
		i++;
	}
	return (NULL);
}
