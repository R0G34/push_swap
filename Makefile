# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abausa-v <abausa-v@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/23 10:15:31 by abausa-v          #+#    #+#              #
#    Updated: 2024/02/23 14:10:09 by abausa-v         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap
DEPS	= ft_printf/libftprintf.a
CC		= gcc
CFLAGS	= -Wall -Werror -Wextra -MMD

INCLUDE	= -I ./include/
SRC_PATH = sources/
OBJ_PATH = obj/

SRC		= main/main.c checkers/ft_duplicate_checker.c checkers/ft_is_arg_nbr.c \
		checkers/ft_is_arg_zero.c checkers/ft_is_correct_input.c checkers/ft_is_digit.c \
		ft_is_digit.c checkers/ft_is_soted.c cost/ft_get_cost.c errors/ft_exit_error.c \
		free/ft_free_stack.c makeAprint/ft_do_pa.c makeAprint/ft_do_pb.c makeAprint/ft_do_ra.c \
		makeAprint/ft_do_rb.c makeAprint/ft_do_rr.c makeAprint/ft_do_rra.c makeAprint/ft_do_rrb.c \
		makeAprint/ft_do_rrr.c makeAprint/ft_do_sa.c makeAprint/ft_do_sb.c makeAprint/ft_do_ss.c \
		moves/ft_do_cheap_move.c moves/ft_push.c moves/ft_rev_rotate_both.c moves/ft_rev_rotate.c \
		moves/ft_rotate_a.c moves/ft_rotate_b.c moves/ft_rotate_both.c moves/ft_rotate.c \
		moves/ft_swap.c moves/ft_which_move.c position/ft_get_position.c position/ft_get_target_position.c \
		position/ft_get_target.c position/ft_get_thelowest_position.c sort/ft_find_highest_indes.c \
		sort/ft_push_saving_three.c sort/ft_push_swap.c sort/ft_shift_stack.c sort/ft_small_sort.c \
		sort/ft_sort_algorithm.c stack/ft_assign_index.c stack/ft_fill_stack_value.c stack/ft_get_size_stack.c \
		stack/ft_new_stack.c stack/ft_stack_add_bottom.c stack/ft_stack_before_bottom.c stack/ft_stack_bottom.c \
		utilities/ft_is_nbr_abs.c utilities/ft_long_atoi.c utilities/ft_nbr_cmp.c utilities/ft_putstr.c
		
SRCS	= $(addprefix $(SRC_PATH), $(SRC))
OBJS	= $(patsubst $(SRC_PATH)%.c, $(OBJ_PATH)%.o, $(SRCS))
RM		= rm -rf

all: $(NAME) 

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJ_PATH)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re