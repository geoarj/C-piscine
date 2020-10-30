/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhakon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/18 15:11:59 by dhakon            #+#    #+#             */
/*   Updated: 2020/08/18 17:42:04 by dhakon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int res;
	int i;
	int minus;

	res = 0;
	i = 0;
	minus = 0;
	while (str[i] == 12 || str[i] == 11 || str[i] == 13 || str[i] == 10
			|| str[i] == 9 || str[i] == 32 || str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
		{
			minus = minus + 1;
		}
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		res = res * 10;
		res = res + (str[i] - 48);
		i++;
	}
	if (minus % 2 == 0)
		return (res);
	return (-res);
}
