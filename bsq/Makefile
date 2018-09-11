# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fgheorgh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/11 13:07:15 by fgheorgh          #+#    #+#              #
#    Updated: 2018/09/11 13:08:30 by fgheorgh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

SRC = srcs/main.c srcs/useful_funcs.c srcs/useful_funcs2.c srcs/ft_start.c \
	  srcs/ft_check_instructions.c srcs/ft_board.c srcs/ft_optimisations.c

all: $(NAME)

$(NAME):
		gcc -Wall -Wextra -Werror -O3 -o $(NAME) $(SRC)
clean:
		/bin/rm -f
fclean: clean
		/bin/rm -f $(NAME)
re: fclean all
