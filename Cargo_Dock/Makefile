CC =	gcc -W -Wall -ansi -pedantic

NAME =	not_mg

SRC =	main.c			    \
        display_map.c               \
	readline.c		    \
	move.c			    \
	mylib/my_putchar.c          \
        mylib/my_isneg.c            \
        mylib/my_put_nbr.c          \
        mylib/my_swap.c             \
        mylib/my_putstr.c           \
        mylib/my_strlen.c           \
        mylib/my_getnbr.c           \
        mylib/my_strcpy.c           \
        mylib/my_strncpy.c          \
        mylib/my_strcmp.c           \
        mylib/my_strncmp.c          \
        mylib/my_strcat.c           \
        mylib/my_strncat.c          \
        mylib/my_strdup.c           \
        mylib/my_strstr.c           \
        mylib/my_str_to_wordtab.c


OBJ = 	$(SRC:%.c=%.o)

RM =	rm -f

$(NAME)	:	$(OBJ)
		$(CC) $(OBJ) -o $(NAME)

all	:
		$(NAME)

clean	:
		$(RM) $(OBJ)

fclean	:
		$(RM) $(NAME) $(OBJ)

.PHONY	:	all clean fclean
