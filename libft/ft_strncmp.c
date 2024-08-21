/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchappie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/01 09:06:48 by dchappie          #+#    #+#             */
/*   Updated: 2019/07/04 13:37:35 by dchappie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (str1[i] == str2[i] && str1[i] && str2[i] && i + 1 < n)
		i++;
	if (n == 0)
		return (0);
	if (str1[i] > str2[i])
		return (1);
	if (str1[i] == str2[i])
		return (0);
	if (str2[i] > str1[i])
		return (-1);
	return (0);
}
