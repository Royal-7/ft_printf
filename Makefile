# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abao <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/11 18:51:22 by abao              #+#    #+#              #
#    Updated: 2018/12/16 17:36:57 by abao             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
W = -Wall -Wextra -Werror
SRC =	argument.c\
		check.c\
		ft_printf.c\
		conversion.c\
		prints/print_char.c\
		prints/print_int.c\
		prints/print_int_other.c\
		prints/print_long.c\
		prints/print_short.c\
		prints/print_double.c\
		prints/print_point.c\

OBJ = $(SRC:.c=.o)

all: $(NAME)
$(NAME):
	make -C libft
	$(CC) -c $(W) $(SRC) -Llibft -lft -I ft_printf.h
	ar -rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	make clean -C libft
	rm -f $(OBJ)

fclean: clean
	make fclean -C libft
	rm -f $(NAME)

re: fclean all
