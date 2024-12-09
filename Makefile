NAME = libftprintf.a
LIB = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c ft_printf_utils1.c ft_printf_utils2.c
OBJ = $(SRC:.c=.o)

all: libftprintf.a

$(NAME): $(OBJ) $(LIB)
	ar rcs $(NAME) $(LIB) $(OBJ)

$(LIB): 
	make -C libft
	make bonus -C libft
	cp libft/$(LIB) $(LIB)

clean:
	rm -f $(OBJ)
	make clean -C libft

fclean: clean
	rm -f $(NAME)
	make fclean -C libft

re: fclean all

.PHONY: all clean fclean re