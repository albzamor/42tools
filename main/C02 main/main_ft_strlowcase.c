#include <unistd.h>
#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	//char *cadena
	char cadena[] ="HOLA";

	//cadena = "hola";

	ft_strlowcase(cadena);
	printf("%s", ft_strlowcase(cadena));
}
