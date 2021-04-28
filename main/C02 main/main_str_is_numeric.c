#include <unistd.h>
#include <stdio.h>

int ft_str_is_numeric(char *str);

int	main(void)
{
	//char *cadena
	char cadena[] ="1245";

	//cadena = "hola";

	ft_str_is_numeric(cadena);
	printf("%d", ft_str_is_numeric(cadena));
}
