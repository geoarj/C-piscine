/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhakon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/28 23:05:47 by dhakon            #+#    #+#             */
/*   Updated: 2020/08/28 23:19:43 by dhakon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	void *mygame;

	mygame = NULL;
	if (root->left)
		mygame = btree_search_item(root->left, data_ref, cmpf);
	if (!mygame && cmpf(root->item, data_ref) == 0)
		return (root->item);
	if (!mygame && root->item)
		mygame = btree_search_item(root->right, data_ref, cmpf);
	return (mygame);
}
