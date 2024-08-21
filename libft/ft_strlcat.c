/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchappie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 09:01:25 by dchappie          #+#    #+#             */
/*   Updated: 2019/09/02 14:31:39 by dchappie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dstsize;

	i = -1;
	dstsize = ft_strlen(dst);
	if (size <= dstsize)
		return (size + ft_strlen(src));
	while ((++i < size - dstsize - 1) && src[i])
		dst[i + dstsize] = src[i];
	while (i < size - dstsize)
		dst[i++ + dstsize] = '\0';
	return (dstsize + ft_strlen(src));
}
