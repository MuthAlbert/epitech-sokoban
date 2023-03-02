##
## EPITECH PROJECT, 2022
## B-PSU-100-LYN-1-1-myls-albert.muth
## File description:
## Makefile
##

BIN_NAME	=	my_sokoban

SRC	=	lib/my/*.c \
		src/*.c \
		*.c \


OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc libmy.a $(OBJ)
	gcc -o $(BIN_NAME) $(SRC) -Lmy -lncurses

clean:
	rm -f my_sokoban
	rm -f libmy.a
	rm -f lib/my/*.o
	rm -f *.o
	rm -f src/*.o

fclean:	clean
