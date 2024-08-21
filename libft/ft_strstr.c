/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchappie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 16:33:03 by dchappie          #+#    #+#             */
/*   Updated: 2019/07/04 08:40:32 by dchappie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int index;
	int len;

	i = 0;
	index = 0;
	len = ft_strlen(needle);
	if (len == 0)
		return ((char*)haystack);
	while (haystack[i])
	{
		while (needle[index] == haystack[index + i])
		{
			if (index == len - 1)
				return ((char*)(haystack + i));
			index++;
		}
		index = 0;
		i++;
	}
	return (0);
}
