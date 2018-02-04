##
## EPITECH PROJECT, 2017
## make
## File description:
## pool
##

all:
	make -C ./cat/

clean:
		rm -f $(OBJS)

fclean:         clean
		rm -f $(NAME)

re:             fclean all

.PHONY:         all clean fclean re
