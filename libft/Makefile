# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abao <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/27 14:04:17 by abao              #+#    #+#              #
#    Updated: 2018/12/16 16:52:12 by abao             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a
W = -Wall -Wextra -Werror
SRC = btree_apply_infix.c ft_isprint.c ft_memmove.c ft_strcpy.c ft_strnequ.c \
		btree_apply_prefix.c ft_itoa.c ft_memset.c ft_strdel.c ft_strnew.c \
		btree_apply_suffix.c ft_lstadd.c ft_putchar.c ft_strdup.c ft_strnstr.c \
		btree_create_node.c  ft_lstdel.c ft_putchar_fd.c ft_strequ.c ft_strrchr.c \
		btree_level_count.c  ft_lstdelone.c ft_putendl.c ft_striter.c ft_strsplit.c \
		btree_search_item.c  ft_lstiter.c ft_putendl_fd.c ft_striteri.c ft_strstr.c \
		dec_to_hex.c ft_lstmap.c ft_putnbr.c ft_strjoin.c ft_strsub.c \
		dec_to_oct.c ft_lstnew.c ft_putnbr_fd.c ft_strlcat.c ft_strtrim.c \
		ft_atoi.c ft_memalloc.c ft_putstr.c ft_strlen.c ft_tolower.c \
		ft_bzero.c ft_memccpy.c ft_putstr_fd.c ft_strmap.c ft_toupper.c \
		ft_isalnum.c ft_memchr.c ft_strcat.c ft_strmapi.c pf_strchr.c \
		ft_isalpha.c ft_memcmp.c ft_strchr.c ft_strncat.c \
		ft_isascii.c ft_memcpy.c ft_strclr.c ft_strncmp.c \
		ft_isdigit.c ft_memdel.c ft_strcmp.c ft_strncpy.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	gcc -c $(W) $(SRC)
	ar -rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
