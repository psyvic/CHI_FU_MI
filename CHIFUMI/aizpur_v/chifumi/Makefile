##
## Makefile for Makefile in /home/vic/Desktop/piscine/C/libmy_01
## 
## Made by AIZPURUA Victor Hugo
## Login   <aizpur_v@etna-alternance.net>
## 
## Started on  Sat Apr  1 07:46:15 2017 AIZPURUA Victor Hugo
## Last update Sat Apr  1 08:22:24 2017 AIZPURUA Victor Hugo
##

CC =		gcc
NAME =		chifumi
SRC =		my_putchar.c   \
		my_put_nbr.c   \
		my_getnbr.c    \
		my_putstr.c    \
		my_nb_len.c    \
		my_strlen.c    \
		my_strcpy.c    \
		my_strncpy.c   \
		my_strcmp.c    \
		my_strncat.c   

OBJ =		$(SRC%.c=%.o)
CFLAGS =	-W -Wall -ansi -ansi -pedantic -L. -I.
LDFLAGS =
RM =		rm -f


$(NAME):	$(OBJ)
		$(CC) $(OBJ) -o $(NAME) $(CFLAGS)
debug: 		$(OBJ)
		$(CC) -g $(OBJ) -o $(NAME) $(CFLAGS)
all:		$(NAME)
clean:
		$(RM) $(OBJ)
fclean:		clean
		$(RM) $(NAME)
re:		fclean all
.PHONY:		all clean fclear re
