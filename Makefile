NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = $(wildcard src/*.c)
OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ) 

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@ 

.PHONY: all clean fclean re

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
