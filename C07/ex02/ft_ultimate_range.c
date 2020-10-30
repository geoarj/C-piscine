/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhakon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 23:16:24 by dhakon            #+#    #+#             */
/*   Updated: 2020/08/21 23:37:19 by dhakon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int k;

	i = 0;
	k = max - min;
	if (min >= max)
		return (0);
	*range = (int *)malloc((max - min) * 4 + 1);
	if (c == NULL)
		return (-1);
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	c[i] = '\0';
	return (k);
}
