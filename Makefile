NAME 	=	push_swap
CC		=	gcc
CFLAGS	=	-Wall -Werror -Wextra

SRC_PTH =	sources/
OBJ_PTH =	objects/

SRC		= 	main.c \
			calc_cost.c checkers.c create_stack.c \
			do_cheap_move.c do_move.c exit.c free.c \
			get_position.c moves.c push.c reverse_rotate.c \
			rotate.c small_sort.c sort_algorithm.c stack.c \
			swap.c utils.c

SRCS	= 	$(addprefix $(SRC_PTH), $(SRC))
OBJ		= 	$(SRC:.c=.o)
OBJS	= 	$(addprefix $(OBJ_PTH), $(OBJ))
INCS	= 	-I ./include/
RM 		=	rm -rf

all: 		$(OBJ_PTH) $(NAME) 

$(OBJ_PTH)%.o: $(SRC_PTH)%.c
			$(CC) $(CFLAGS) -c $< -o $@ $(INCS)

$(OBJ_PTH):
			mkdir $(OBJ_PTH)

$(NAME): 	$(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
			$(RM) $(OBJ_PTH)

fclean: clean
			$(RM) $(NAME)

re: fclean all

test2:		$(NAME)	
			$(eval ARG = $(shell shuf -i 0-100 -n 2))
			./push_swap $(ARG) | ./checker_linux $(ARG)
			@echo -n "Instructions: "
			@./push_swap $(ARG) | wc -l

test3:		$(NAME)	
			$(eval ARG = $(shell shuf -i 0-100 -n 3))
			./push_swap $(ARG) | ./checker_linux $(ARG)
			@echo -n "Instructions: "
			@./push_swap $(ARG) | wc -l

test5:		$(NAME)	
			$(eval ARG = $(shell shuf -i 0-5000 -n 5))
			./push_swap $(ARG) | ./checker_linux $(ARG)
			@echo -n "Instructions: "
			@./push_swap $(ARG) | wc -l

test100:	$(NAME)	
			$(eval ARG = $(shell shuf -i 0-5000 -n 100))
			./push_swap $(ARG) | ./checker_linux $(ARG)
			@echo -n "Instructions: "
			@./push_swap $(ARG) | wc -l

test500:	$(NAME)	
			$(eval ARG = $(shell shuf -i 0-5000 -n 500))
			./push_swap $(ARG) | ./checker_linux $(ARG)
			@echo -n "Instructions: "
			@./push_swap $(ARG) | wc -l

test1000:	$(NAME)	
			$(eval ARG = $(shell shuf -i 0-5000 -n 1000))
			./push_swap $(ARG) | ./checker_linux $(ARG)
			@echo -n "Instructions: "
			@./push_swap $(ARG) | wc -l
					
.PHONY: all clean fclean re test2 test3 test5 test100 test500 test1000