#include <unistd.h>
#include <stdio.h>

int ft_str_is_printable(char *str);

int	main(void)
{
	//char *cadena
	char cadena[] ="AAA";

	//cadena = "hola";

	ft_str_is_printable(cadena);
	printf("%d", ft_str_is_printable(cadena));
}
