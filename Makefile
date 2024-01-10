CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_printf.c ft_handle_caractere.c ft_putnbr.c ft_handle_intiger.c ft_handle_state_one.c ft_handle_state_zero.c ft_handle_string.c ft_print_digit.c
OBJ = $(SRC:.c=.o)
AR=ar crs
NAME = libftprintf.a
RM=rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ) 

clean:
	$(RM) $(OBJ) $(B_OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all