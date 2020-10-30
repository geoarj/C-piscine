/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhakon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/21 22:26:51 by dhakon            #+#    #+#             */
/*   Updated: 2020/08/21 23:28:46 by dhakon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *c;
	int k;

	i = 0;
	c = 0;
	k = max - min;
	if (min >= max)
		return (NULL);
	c = (int *)malloc((max - min) * 4 + 1);
	if (c == NULL)
		return (NULL);
	while (min < max)
	{
		c[i] = min;
		min++;
		i++;
	}
	c[i] = '\0';
	return (c);
}
