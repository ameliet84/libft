NAME = libft.a

SDIR =	
SRCS =	$(wildcard *.c)


OBJS = $(SRCS:.c=.o)
INCL = -I includes/

CFLAGS =  -Wall -Werror -Wextra 
CC = gcc $(CFLAGS) $(INCL) 

.PHONY:	all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $@ $^
	ranlib $@

%.o :	$(SDIR)%.c $(INCL)
	$(CC) -o $@ -c $? $(CFLAGS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all