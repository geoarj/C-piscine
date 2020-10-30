/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhakon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 20:29:19 by dhakon            #+#    #+#             */
/*   Updated: 2020/08/17 20:48:46 by dhakon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_array(char *str, int nb)
{
	int i;

	i = 0;
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

void    ft_putnbr(int nb)
{
    char    str[11];

    if (nb == -2147483648)
    {
        write(1, "-2147483648", 11);
        return ;
    }
    if (nb == 0)
        write(1, "0", 1);
    if (nb < 0)
    {
        nb *= -1;
        write(1, "-", 1);
    }
	ft_array(str, nb);
} 



int main()
{
    int nb = 123;
    ft_putnbr(nb);
}
