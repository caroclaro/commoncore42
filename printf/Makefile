NAME = libftprintf.a

LIB_PATH = ./libraries
LIBFT = ./libft/libft.a
LIBFTPRINTF = $(LIB_PATH)/ft_printf.h

CC = cc
CFLAGS = -Wall -Wextra -Werror

INCLUDE = -I $(LIB_PATH)

SRCS_PATH = ./printf

SRCS 		= printf/charaux.c printf/stringaux.c printf/numaux.c \
			printf/ft_printf.c printf/hexaux.c printf/ptraux.c


OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(LIBFT)
	ar rcs $(NAME) $(OBJS)

$(LIBFT):
	make -C libft
	cp $(LIBFT) $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

clean:
	make clean -C libft
	rm -f $(OBJS)

fclean: clean
	make fclean -C libft
	rm -f $(OBJS)
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re