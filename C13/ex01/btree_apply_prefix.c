/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhakon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/28 20:47:37 by dhakon            #+#    #+#             */
/*   Updated: 2020/08/28 23:23:46 by dhakon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	if (root == NULL)
		return ;
	(*applyf)(root->item);
	if (root->left)
		btree_apply_prefix(root->left, (applyf));
	if (root->right)
		btree_apply_prefix(root->right, (applyf));
}
