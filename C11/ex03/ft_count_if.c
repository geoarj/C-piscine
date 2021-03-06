/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhakon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/26 20:18:56 by dhakon            #+#    #+#             */
/*   Updated: 2020/08/26 21:02:32 by dhakon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int length, int (*f)(char*))
{
	int i;
	int nmb;

	i = 0;
	nmb = 0;
	while (i < length)
	{
		if (f(tab[i]) != 0)
			nmb++;
		i++;
	}
	return (nmb);
}
