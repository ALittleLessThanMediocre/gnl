/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchappie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 08:58:01 by dchappie          #+#    #+#             */
/*   Updated: 2019/07/03 14:31:29 by dchappie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(const char *s1, const char *s2)
{
	char	*str1;
	char	*str2;

	if (!s1 || !s2)
		return (0);
	str1 = (char *)(s1);
	str2 = (char *)(s2);
	while (*str1 && *str2)
		if (*str1++ - *str2++)
			return (0);
	if (*str1 || *str2)
		return (0);
	return (1);
}
