#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	//char *cadena
	char cadena[] ="hola355555555";
	char destino[] = "adios444";
	unsigned int i = 6;

	//cadena = "hola";

	ft_strlcpy(cadena, destino, i);
	printf("%u", ft_strlcpy(cadena, destino, i));
}
