/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhakon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 15:01:11 by dhakon            #+#    #+#             */
/*   Updated: 2020/08/21 20:16:32 by dhakon           ###   ########.fr       */
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
	(void) argc;
	int s;
	
	s = 1;
	while (argv[s])
	{
		ft_putstr(argv[s]);
		s++;
		write(1, "\n", 1);
	}
}
