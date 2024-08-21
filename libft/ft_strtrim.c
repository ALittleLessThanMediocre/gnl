/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchappie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 16:12:26 by dchappie          #+#    #+#             */
/*   Updated: 2019/07/04 11:52:17 by dchappie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char			*str;
	unsigned int	i;
	size_t			len;

	if (!s)
		return (ft_strdup(""));
	i = 0;
	len = ft_strlen(s) - 1;
	while (s[i] && ft_ismspace(s[i]))
		i++;
	if (s[i] == '\0')
		return (ft_strdup(""));
	while (s[len] && (s[len] == ' ' || s[len] == '\n' || s[len] == '\t'))
		len--;
	len++;
	str = (char *)ft_memalloc((len - i) + 1);
	if (str)
		str = ft_strsub(s, i, len - i);
	return (str);
}
