NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c ft_printf_utils1.c
OBJ = $(SRC:.c=.o)
OBJLIB = $(shell find libft/ -type f -name "*.o")

all: libftprintf.a

$(NAME): $(OBJ) lib
	ar rcs $(NAME) $(OBJ) $(OBJLIB)

lib: 
	make -C libft
	make bonus -C libft

clean:
	rm -f $(OBJ)
	make clean -C libft
	make fclean -C libft

fclean: clean
	rm -f $(NAME)
	
re: fclean all

.PHONY: all lib clean fclean re