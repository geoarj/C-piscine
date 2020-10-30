# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dhakon <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/23 21:01:00 by dhakon            #+#    #+#              #
#    Updated: 2020/08/23 21:01:04 by dhakon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	srcs/ft_putchar.c \
		srcs/ft_swap.c \
		srcs/ft_putstr.c \
		srcs/ft_strlen.c \
		srcs/ft_strcmp.c

FLAG = -Wall -Wextra -Werror

OBJ = ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o

NAME = libft.a

HEADER = includes/ft.h

${NAME}:
	gcc ${FLAG} -c ${SRCS} -I ${HEADER}
	ar rc ${NAME} ${OBJ}
	ranlib ${NAME}
	mv *.o srcs

all: ${NAME}

clean: 
		rm -f ./srcs/*.o

fclean: clean
		rm -f ${NAME}

re: fclean all
