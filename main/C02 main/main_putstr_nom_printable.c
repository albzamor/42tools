#include <unistd.h>
#include <stdio.h>

void ft_putstr_non_printable(char *str);

int	main(void)
{

	char *cadena;
	cadena = "Coucou\ntu vas bien ?";

	ft_putstr_non_printable(cadena);
}
