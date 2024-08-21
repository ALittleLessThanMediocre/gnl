/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstloop.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchappie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 11:30:53 by dchappie          #+#    #+#             */
/*   Updated: 2019/09/06 13:46:40 by dchappie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstloop(t_list **alst)
{
	t_list	*temp;

	if (!*alst)
		return ;
	temp = (t_list *)malloc(sizeof(t_list));
	temp = *alst;
	while (temp->next)
		temp = temp->next;
	temp->next = *alst;
}
