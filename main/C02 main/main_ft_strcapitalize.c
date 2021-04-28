#include <unistd.h>
#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	//char *cadena
	char cadena1[] ="salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	//cadena = "hola";

	ft_strcapitalize(cadena1);
	printf("%s", cadena1);
}
