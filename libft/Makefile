SRC = libreria
#falta incluir los objetos .o a medida que tenga acabadas las funciones
OBJS = ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o
CFLAGS = -Wall -Werror -Wextra -I./include

$(SRC) = $(OBJS)
	gcc $(CFLAGS) $(OBJS) -o $(SRC)
%.o : %.c
	gcc -c $(CFLAGS) $< -o $@
.PHONY: clean fclean re
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(SRC)
re: fclean SRC