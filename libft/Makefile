TARGET = libreria
#falta incluir los objetos .o a medida que tenga acabadas las funciones
OBJS = ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o
CFLAGS = -Wall -Werror -Wextra -I./include

$(TARGET) = $(OBJS)
	gcc $(CFLAGS) $(OBJS) -o $(TARGET)
%.o : %.c
	gcc -c $(CFLAGS) $< -o $@
.PHONY: clean fclean re
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(TARGET)
re: fclean TARGET