##
## EPITECH PROJECT, 2021
## makefile
## File description:
## Makefile
##

CC		=	gcc

CFLAGS	=	-g3 -W -Wall -Wextra -Iinclude/

TFLAGS	= 	--coverage -lcriterion

SRC		=	$(wildcard *.c) \

OBJ		=	$(SRC:.c=.o)

TARGET	=	navy

all:	$(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

tests_run:	$(OBJ_T)
	$(CC) $(OBJ_T) -o $(TARGET_T) $(TFLAGS)
	./unit_test

tests_clean:
	rm -f *.gcda
	rm -f *.gcno
	rm -f tests/*.o
	rm -f $(TARGET_T)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(TARGET)
	rm -f a.out

re: fclean all