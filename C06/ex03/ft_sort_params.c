/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhakon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 16:23:20 by dhakon            #+#    #+#             */
/*   Updated: 2020/08/20 23:01:49 by dhakon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] > 0)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (s2[i] > 0)
	{
		return ('\0' - s2[i]);
		i++;
	}
	return (0);
}

void	ft_swap(char **a, char **b)
{
	char *temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	sort_params(char **tab, int size)
{
	int i;
	int j;
	int ind;

	i = 0;
	j = 0;
	ind = 1;
	while (ind)
	{
		ind = 0;
		while (j < size - 1)
		{
			if (ft_strcmp(tab[j], tab[j + 1]) > 0)
			{
				ft_swap(&tab[j], &tab[j + 1]);
				ind = 1;
			}
			j++;
		}
		j = 0;
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	sort_params(&argv[1], argc - 1);
	while (argv[i])
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		++i;
	}
}
