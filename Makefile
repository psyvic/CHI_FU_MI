##
## Makefile for Makefile in /home/vic/Desktop/piscine/C/libmy_01
## 
## Made by AIZPURUA Victor Hugo
## Login   <aizpur_v@etna-alternance.net>
## 
## Started on  Sat Apr  1 07:46:15 2017 AIZPURUA Victor Hugo
## Last update Sat Apr  1 10:28:36 2017 AIZPURUA Victor Hugo
##

CC =		gcc
NAME =		chifumi
SRC =		chifumi.c \
		helper.c  \
		check_params.c \
		choix.c  \
		choix_2.c \
		make_choice.c \
		result.c \
		print_list.c \
		end.c 

OBJ =		$(SRC:%.c=%.o)
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
