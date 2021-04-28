#include <unistd.h>
#include <stdio.h>

int ft_str_is_uppercase(char *str);

int	main(void)
{
	//char *cadena
	char cadena[] ="AAAAA";

	//cadena = "hola";

	ft_str_is_uppercase(cadena);
	printf("%d", ft_str_is_uppercase(cadena));
}
