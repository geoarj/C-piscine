/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhakon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 22:44:03 by dhakon            #+#    #+#             */
/*   Updated: 2020/08/27 23:24:36 by dhakon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *new;

	new = *begin_list;
	if (new == NULL)
	{
		*begin_list = ft_create_elem(data);
	}
	else
	{
		while (new->next != NULL)
		{
			new = new->next;
		}
		new->next = ft_create_elem(data);
	}
}
