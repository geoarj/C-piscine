/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhakon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 15:40:33 by dhakon            #+#    #+#             */
/*   Updated: 2020/08/27 19:29:40 by dhakon           ###   ########.fr       */
/*                                                                            */
/*vim    ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list *entity;

	entity = (t_list *)malloc(1 * sizeof(t_list));
	entity->data = data;
	entity->next = NULL;
	return (entity);
}
