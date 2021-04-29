#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	atoi(const char *str);
int	ft_atoi(const char *str);

int ft_atoi(const char *str)
{

	int i = 0;
	int signo = 1;
	int numero = 0;


	while (str[i] == '\f' || str[i] == '\n' || str[i] == ' '
	|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{

		if (str[i] == '-')
			signo = signo * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] < '9')
	{
		numero = (numero * 10) + (str[i] - '0');
		i++;
	}


	numero = numero * signo;
	return(numero);
}

int	main(void)
{
	const char	cadena[] = " 	-3042.456";
	printf("original atoi %d\n", atoi(cadena));
	printf("mia atoi      %d\n", ft_atoi(cadena));
}
