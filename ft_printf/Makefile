# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abausa-v <abausa-v@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/12 10:12:24 by abausa-v          #+#    #+#              #
#    Updated: 2023/12/15 12:56:04 by abausa-v         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

DEPS = Libft/libft.a

CC = clang

CCFLAGS = -g3 -Wall -Werror -Wextra -pedantic -O3

INCLUDE = ft_printf.h

ARFLAGS = -rcs

RM = rm -rf

SRCS = ft_printf.c ft_putchars.c ft_putstr.c ft_putptr.c ft_putint.c ft_printf_u.c ft_printf_hexl.c ft_printf_hexu.c

OBJS = $(SRCS:.c=.o)

TEST = main.c

TEST_OUT = ./a.out

all : $(NAME)

%.o : %.c
	$(CC) $(CCFLAGS) -c -o $@ $<

$(DEPS):
	make -C Libft

$(NAME): $(DEPS) $(INCLUDE) $(OBJS)
	cp $(DEPS) $(NAME)
	ar $(ARFLAGS) $(NAME) $(OBJS)

clean :
	$(RM) $(NAME)
	make -C Libft fclean

fclean : clean 
	$(RM) $(NAME) $(OBJS)

test : $(DEPS) $(SRCS) $(TEST) $(INCLUDE)
	$(CC) $(CCFLAGS) $(SRCS) $(TEST) $(DEPS) && $(TEST_OUT)

re : fclean $(NAME) all

.PHONY: clean fclean test re
