/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhakon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 16:11:06 by dhakon            #+#    #+#             */
/*   Updated: 2020/08/20 16:22:05 by dhakon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int		main(int argc, char **argv)
{
	int s;

	s = 1;
	s = argc - 1;
	while (s > 0)
	{
		ft_putstr(argv[s]);
		s--;
		write(1, "\n", 1);
	}
}
