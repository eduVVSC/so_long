NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SOURCE = ft_unsignedint.c ft_putnbr.c ft_printlowerhexa.c ft_printupperhexa.c \
		ft_putchar.c ft_putstr.c ft_printf.c ft_printpointer.c

OBJ = $(SOURCE:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $@ $^
	@echo "-->ft_printf objects created<--"

%.o : %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@echo "->ft_printf objects cleaned<-"

fclean: clean
	@rm -f $(NAME)
	@echo "->$(NAME) erase<-"

re: fclean all

.PHONY: all clean fclean re
