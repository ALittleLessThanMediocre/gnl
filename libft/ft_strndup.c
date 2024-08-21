/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchappie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 15:24:51 by dchappie          #+#    #+#             */
/*   Updated: 2019/09/05 15:26:27 by dchappie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strndup(const char *str, size_t n)
{
	char	*dup;
	int		len;
	int		i;

	len = (ft_strlen(str) < n) ? ft_strlen(str) : n;
	if (!(dup = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	i = 0;
	ft_strncpy(dup, str, n);
	return (dup);
}
