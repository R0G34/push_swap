# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abausa-v <abausa-v@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/19 11:22:10 by abausa-v          #+#    #+#              #
#    Updated: 2024/01/22 16:27:31 by abausa-v         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

DEPS = Libft/libft.a

CC = gcc

CCFLAGS = -Wall -Werror -Wextra

ICLUDE = push_swap.c

RM = rm -rf

SRCS = push_swap.c

OBJS = $(SRC:.c=.o)

all : $(NAME)

clean :
		$(RM) $(NAME)
		make -C Libft fclean

fclean :
		$(RM) $(NAME)

re : fclean $(NAME) all