/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   example.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhakon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 19:56:27 by dhakon            #+#    #+#             */
/*   Updated: 2020/08/24 21:04:51 by dhakon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "j12.h"

#define BUF_SIZE 4096

void ft_putstr_fd(int fd, char c)
{
	write(fd, str, ft_strlen(str));
}

int main()
{
	int fd;
	int ret;
	char buf[BUF_SIZE + 1];

	fd = open("42", O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("open() error\n");
		return (1);
	}
	while (ret = read(fd, buf, BUF_SIZE))
	{
		buf[ret] = '\0';
		ft_putnb(ret);
		ft_putstr(buf);
	}
	buf[ret] = '\0';
	ft_putnbr(ret);
	ft_putstr(buf);
	if (close(fd) == -1)
	{
		ft_putstr("close() error\n");
		return (1);
	}
	return (0);
}
