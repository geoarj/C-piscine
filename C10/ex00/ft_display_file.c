/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhakon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 18:18:17 by dhakon            #+#    #+#             */
/*   Updated: 2020/08/25 22:31:14 by dhakon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	display_file(int fd)
{
	char c;

	while (read(fd, &c, 1))
		write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int fd;

	if (argc == 1)
		write(1, "File name missing.\n", 19);
	else if (argc > 2)
		write(1, "Too many arguments.\n", 20);
	else
	{
		if ((fd = open(argv[1], O_RDONLY)) == -1)
			write(1, "Cannot read file.\n", 18);
		else
			display_file(fd);
		close(fd);
	}
	return (0);
}
