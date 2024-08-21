/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchappie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 11:29:20 by dchappie          #+#    #+#             */
/*   Updated: 2019/09/06 13:48:11 by dchappie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_lstlen(t_list *head)
{
	size_t	len;
	t_list	*current;

	len = 0;
	current = head;
	while (current)
	{
		len++;
		current = current->next;
	}
	return (len);
}
