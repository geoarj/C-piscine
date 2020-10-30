/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhakon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/26 21:47:22 by dhakon            #+#    #+#             */
/*   Updated: 2020/08/26 23:06:04 by dhakon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f) (int, int))
{
	int i;

	i = 0;
	if (f(tab[0], tab[length - 1]) <= 0)
		while (i < length - 1)
		{
			if (f(tab[i], tab[i + 1]) <= 0)
				i++;
			else
				return (0);
		}
	if (f(tab[0], tab[length - 1]) >= 0)
		while (i < length - 1)
		{
			if (f(tab[i], tab[i + 1]) >= 0)
				i++;
			else
				return (0);
		}
	return (1);
}
