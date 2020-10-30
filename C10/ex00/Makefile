# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MakeFile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dhakon <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/25 22:32:08 by dhakon            #+#    #+#              #
#    Updated: 2020/08/25 22:46:14 by dhakon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_display_file.c
OBJS = ${SRCS:.c=.o}
NAME = ft_display_file

CC = cc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $<

all: ${OBJS}
	cc ${CFLAGS} ${OBJS} -o ${NAME}
	
clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

.PHONY: all clean fclean
