/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhakon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 15:50:42 by dhakon            #+#    #+#             */
/*   Updated: 2020/08/17 17:26:20 by dhakon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int i;
	int minus;
	char str[11];
	
	i = 0;
	minus = 0;
	if (nb == 0)
		write (1, "0", 1);
	if (nb < 0)
	{
		minus = 1;
		nb *= -1;
		write (1, "-", 1);
	}
	while (nb > 0)
	{
		str[i] = nb % 10 + '0';
		nb = nb / 10;
		i++;
	}
	while (i != 0)
	{
		write(1, &str[i - 1], 1);
		i--;
	}
}

int main()
{
	int nb = -1234;
	ft_putnbr(nb);
}
