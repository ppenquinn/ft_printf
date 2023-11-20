# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nappalav <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/29 00:29:16 by nappalav          #+#    #+#              #
#    Updated: 2023/11/20 12:48:12 by nappalav         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
AR = ar
CFLAGS = -Wall -Wextra -Werror -c
ARFLAGS = -rcs

SRC = ft_printf.c ft_printf_c.c ft_printf_s.c ft_printf_num.c libft/ft_strlen.c

OBJ = $(SRC:.c=.o)

all:	$(NAME)

$(NAME):$(OBJ)
		$(AR) $(ARFLAGS) $(NAME) $(OBJ)

%.o:	%.c
		$(CC) $(CFLAGS) $< -o $@

clean:
		rm -f $(OBJ) $(OBJBONUS)

fclean: clean
		rm -f $(NAME) $(BONUS)

re:	fclean all

.PHONY: re clean fclean all
