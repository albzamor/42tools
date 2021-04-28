#include <unistd.h>
#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	//char *cadena
	char cadena[] ="hola";

	//cadena = "hola";

	ft_strupcase(cadena);
	printf("%s", ft_strupcase(cadena));
}
