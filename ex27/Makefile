#
#**************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmidoun <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/23 15:42:50 by hmidoun           #+#    #+#              #
#    Updated: 2019/04/14 23:48:06 by midounhoc        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = display_file
SRC = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/test_param.c ./srcs/print_file.c ./srcs/display_file.c
HEADER = ./includes/
OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o display_file.o print_file.o test_param.o
CC = gcc
FLAG = -Wall -Werror -Wextra
all : $(NAME)

$(NAME) :
	$(CC) $(FLAG) -c $(SRC) -I $(HEADER)
	$(CC) $(FLAG) $(OBJ) -o $(NAME)
clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all
