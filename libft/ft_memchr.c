/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchappie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 08:48:09 by dchappie          #+#    #+#             */
/*   Updated: 2019/07/03 11:32:48 by dchappie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*chr;

	chr = (unsigned char *)(s);
	while (n--)
	{
		if (*(chr) == (unsigned char)c)
			return (chr);
		chr++;
	}
	return (NULL);
}
