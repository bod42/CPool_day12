##
## EPITECH PROJECT, 2017
## makefile
## File description:
## pool
##

CC	=	gcc -W -Wall

SRCS	=	cat.c

OBJS	=	$(SRCS:.c=.o)

NAME	=	cat

all:	$(NAME)

$(NAME):	$(OBJS)
		$(CC) $(OBJS) -L ../lib/my -lmy -o $(NAME)

clean:
		rm -f $(OBJS)

fclean:		clean
		rm -f $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
