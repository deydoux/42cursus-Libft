NAME=libft.a
INCLUDE=libft.h
SOURCES=ft_isalpha.c	\
		ft_isdigit.c	\
		ft_isalnum.c	\
		ft_isascii.c	\
		ft_isprint.c	\
		ft_strlen.c		\
		ft_memset.c

CC=gcc
CFLAGS=-Wall -Wextra -Werror
ARFLAGS=-c -r -s

OBJECTS=$(SOURCES:.c=.o)

$(NAME): $(OBJECTS)
	$(AR) $(ARFLAGS) $@ $^

%.o: %.c $(INCLUDE)
	$(CC) $(CFLAGS) -include $(INCLUDE) -c $<

all: $(NAME)

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
