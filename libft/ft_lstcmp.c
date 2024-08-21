/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchappie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 11:26:16 by dchappie          #+#    #+#             */
/*   Updated: 2019/09/06 13:45:58 by dchappie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstcmp(t_list *head1, t_list *head2)
{
	t_list	*temp1;
	t_list	*temp2;

	temp1 = head1;
	temp2 = head2;
	while (temp1 && temp2)
	{
		if (temp1->content == temp2->content)
		{
			temp1 = temp1->next;
			temp2 = temp2->next;
		}
		else
			return (0);
	}
	if (!temp1 && !temp2)
		return (1);
	return (0);
}
