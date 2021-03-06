/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhakon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/19 20:32:18 by dhakon            #+#    #+#             */
/*   Updated: 2020/08/19 22:20:09 by dhakon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long int i;

	i = 0;
	while ((i * i) <= nb)
	{
		i++;
		if (i * i == nb)
			return ((int)i);
	}
	return (0);
}
