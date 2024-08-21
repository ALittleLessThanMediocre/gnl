/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchappie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 08:54:14 by dchappie          #+#    #+#             */
/*   Updated: 2019/07/04 12:48:09 by dchappie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (*str2 && (*str1 == *str2))
	{
		str1++;
		str2++;
	}
	if (*str1 > *str2)
		return (1);
	if (*str1 == *str2)
		return (0);
	if (*str2 > *str1)
		return (-1);
	return (0);
}
