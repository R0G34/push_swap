# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abausa-v <abausa-v@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/26 09:48:32 by abausa-v          #+#    #+#              #
#    Updated: 2024/02/26 14:53:09 by abausa-v         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	 gcc
CFLAGS	= 	-Wall -Werror -Wextra
NAME	= 	push_swap

SRC_PATH = 	sources/
OBJ_PATH = 	obj/
DEPS	=	Libft/libft.a

SRC		= 	main.c \
			calc_cost.c \
			checker_utils.c \
			checker.c \
			create_stack.c \
			index.c \
			make_move.c \
			push_move.c \
			reverse_rotate_move.c \
			rotate_move.c \
			small_sort.c \
			sort_algorithm.c \
			stack_operations.c \
			swap_move.c \
			utilities.c
			
SRCS	= 	$(addprefix $(SRC_PATH), $(SRC))
OBJ		= 	$(SRC:.c=.o)
OBJS	= 	$(addprefix $(OBJ_PATH), $(OBJ))
INCS	= 	-I ./includes/

all: $(OBJ_PATH) $(NAME) 

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	$(CC) $(CFLAGS) -c $< -o $@ $(INCS)

$(OBJ_PATH):
	mkdir $(OBJ_PATH)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJ_PATH)

fclean: clean
	rm -f $(NAME)

re: fclean all
					
.PHONY: all clean fclean re