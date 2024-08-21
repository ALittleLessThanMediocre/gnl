/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchappie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 09:16:32 by dchappie          #+#    #+#             */
/*   Updated: 2019/07/03 14:36:00 by dchappie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	char	*str1;
	char	*str2;

	if (!s1 || !s2)
		return (0);
	if (!n)
		return (1);
	str1 = (char *)(s1);
	str2 = (char *)s2;
	while (*str1 && *str2 && n--)
		if (*str1++ - *str2++)
			return (0);
	if (n + 1)
		if (*str1 || *str2)
			return (0);
	return (1);
}
