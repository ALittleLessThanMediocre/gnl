/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchappie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 17:41:38 by dchappie          #+#    #+#             */
/*   Updated: 2019/08/09 09:33:12 by dchappie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*dp;
	char	*sp;

	dp = (char *)(dest);
	sp = (char *)(src);
	if (dest == src)
		return (dest);
	while (n--)
		*dp++ = *sp++;
	return (dest);
}
