/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhakon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 22:20:03 by dhakon            #+#    #+#             */
/*   Updated: 2020/08/27 23:24:08 by dhakon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *i;

	i = 0;
	while (begin_list != 0)
	{
		i = begin_list;
		begin_list = begin_list->next;
	}
	return (i);
}
