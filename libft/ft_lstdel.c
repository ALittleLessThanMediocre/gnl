/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchappie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 13:18:34 by dchappie          #+#    #+#             */
/*   Updated: 2019/09/06 11:28:31 by dchappie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*curr;
	t_list	*next;

	if (!alst)
		return ;
	curr = *alst;
	while (curr)
	{
		next = curr->next;
		ft_lstdelone(&curr, del);
		curr = next;
	}
	*alst = NULL;
}
