# @ delante no sale en consola la orden. solo la e
#Variables
OBJS = main.c funciones.c
BINARY = programa
CFLAGS = -Wall -Werror -Wextra


# all: dice que hace el make ppor defecto si solo se pone make
all: programa #en este caso ejecuta la regla programa

# Esta regla compila el programa principal
# objetivo: dependencias
# tabulador regla
programa: $(OBJS)
	gcc $(CFLAGS) -o $(BINARY) $(OBJS)
#borrar: si se ejecuta make clean se borran los .o y programa
fclean:
	@rm -f $(BINARY)






# gcc -c no genera el ejecutable a.out sino el codigo objeto
