CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_printf.c ft_handle_caractere.c ft_handle_intiger.c ft_handle_state_one.c ft_handle_state_zero.c ft_handle_string.c ft_print_digit.c
OBJ = $(SRC:.c=.o)
LIBFT = libft/libft.a
AR=ar crs
NAME = ft_printf.a

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	$(AR) $(NAME) $(OBJ) 

$(LIBFT):
	$(MAKE) -C libft

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)
	$(MAKE) -C libft clean

fclean: clean
	$(RM) $(NAME)
	$(MAKE) -C libft fclean

re: fclean all