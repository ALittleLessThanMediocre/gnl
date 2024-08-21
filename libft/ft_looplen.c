/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_looplen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchappie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 11:23:01 by dchappie          #+#    #+#             */
/*   Updated: 2019/09/06 14:17:35 by dchappie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_looplen(t_list *alst)
{
	t_list	*slow_ptr;
	t_list	*fast_ptr;
	t_list	*temp;
	int		res;

	slow_ptr = alst;
	fast_ptr = alst;
	while (fast_ptr && fast_ptr->next)
	{
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;
		if (slow_ptr == fast_ptr)
		{
			temp = slow_ptr;
			res = 1;
			while (temp->next != slow_ptr)
			{
				res++;
				temp = temp->next;
			}
			return (res);
		}
	}
	return (0);
}
