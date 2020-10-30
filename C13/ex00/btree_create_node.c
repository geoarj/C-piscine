/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhakon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/28 20:07:36 by dhakon            #+#    #+#             */
/*   Updated: 2020/08/28 20:45:29 by dhakon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

t_btree	*btree_create_node(void *item)
{
	t_btree *new;

	new = (t_btree *)malloc(1 * sizeof(t_btree));
	new->item = item;
	new->right = NULL;
	new->left = NULL;
	return (new);
}
