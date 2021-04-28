#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	//char *cadena
	char cadena[] ="hol(a";

	//cadena = "hola";

	ft_str_is_alpha(cadena);
	printf("%d", ft_str_is_alpha(cadena));
}
