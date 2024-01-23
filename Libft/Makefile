# Makefile to compile libft.

NAME = libft.a

# Variables

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar -rcs
RM = rm -f

# Sources

SOURCES =\
	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c\
	ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c\
	ft_strrchr.c ft_strncmp.c ft_memcmp.c ft_strnstr.c ft_atoi.c\
	ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c\
	ft_memchr.c ft_split.c ft_itoa.c ft_putchar_fd.c ft_putstr_fd.c\
	ft_putendl_fd.c ft_putnbr_fd.c ft_strmapi.c ft_striteri.c

# Bonus Sources

BSOURCES =\
	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\
	ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c\
	ft_lstmap.c

# Converts .c into .o files
OBJECTS = $(SOURCES:.c=.o)
BOBJECTS = $(BSOURCES:.c=.o)

# Standard rule to create libft.a when executing Make
all: $(NAME)

# This builds the static library libft.a using the objects listed in $(OBJECTS)
$(NAME):$(OBJECTS)
	$(AR) $@ $(OBJECTS)

# This builds the static library libft.a using the objects listed in $(BOBJECTS)
bonus: $(OBJECTS) $(BOBJECTS)
	$(AR) -r $(NAME) $?

# Applies the rules to follow when compiling sources into objects
%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

# Removes all the .o files
clean:
	$(RM) $(OBJECTS) $(BOBJECTS)

# Removes the .o files and the library too
fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
