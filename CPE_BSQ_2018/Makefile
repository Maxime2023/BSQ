##
## EPITECH PROJECT, 2018
## makekile
## File description:
## makefile printf
##

NAME	=	bsq

SRC	=	src/bsq.c			\
		src/x_lenght.c			\
		src/my_putchar.c		\
		src/smb.c			\
		src/start.c			\
		src/y_lenght.c			\
		src/line.c			\
		src/completing_first_int_tab.c	\
		src/my_putstr.c			\
		src/col.c			\
		src/one.c			\
		src/tab_mal.c

OBJ	=	$(SRC:.c=.o)

CC	=	gcc

all:		$(NAME)

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(SRC) -Os -O3 -Ofast

clean:
	rm -f $(OBJ)

fclean: 	clean
	rm -f $(NAME)

re:	clean fclean all
