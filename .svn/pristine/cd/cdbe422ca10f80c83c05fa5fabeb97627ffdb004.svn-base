##
## Makefile for Makefile in /home/cameron/Libmy/carra_c
## 
## Made by CARRA Cameron
## Login   <carra_c@etna-alternance.net>
## 
## Started on  Sat Oct  1 18:37:47 2016 CARRA Cameron
## Last update Wed Oct  4 18:41:52 2017 CARRA Cameron
##

NAME	=	libmy.a

SRC	=	my_putchar.c        \
		my_isneg.c          \
		my_put_nbr.c        \
		my_swap.c           \
		my_putstr.c         \
		my_strlen.c         \
		my_getnbr.c         \
		my_strcpy.c         \
		my_strncpy.c        \
		my_strcmp.c         \
		my_strncmp.c        \
		my_strcat.c         \
		my_strncat.c        \
		my_strdup.c         \
		my_strstr.c         \
		my_str_to_wordtab.c

OBJS	=	$(SRC:%.c=%.o)

CC	=	gcc

CFLAGS	=	-Wall -Werror -Wextra

all	:	$(NAME)

$(NAME)	:
		$(CC) -c $(CFLAGS) $(SRC)
		ar -rc $(NAME) $(OBJS)
		ranlib $(NAME)

clean   :
		$(RM) $(OBJS)

fclean  :	clean
		$(RM) $(NAME)

re      :	fclean all

.PHONY	:	fclean clean all
