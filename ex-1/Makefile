NAME = exercice_1

CFLAGS = -Wall -Wextra -O2

SRCS = main.c \
       str_cpy.c

all: $(NAME)

$(NAME): $(SRCS)
	gcc $(CFLAGS) $(SRCS) -o $(NAME)

fclean: 
	rm -f $(NAME)

re: fclean all
