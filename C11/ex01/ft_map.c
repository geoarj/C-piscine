/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhakon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/26 18:07:20 by dhakon            #+#    #+#             */
/*   Updated: 2020/08/26 19:07:43 by dhakon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *nmb;

	i = 0;
	nmb = (int *)malloc(length * sizeof(int));
	while (i < length)
	{
		nmb[i] = f(tab[i]);
		i++;
	}
	return (nmb);
}
