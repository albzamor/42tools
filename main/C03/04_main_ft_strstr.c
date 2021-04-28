/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_main_ft_strstr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albzamor <albzamor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 13:29:01 by albzamor          #+#    #+#             */
/*   Updated: 2021/04/21 18:43:23 by albzamor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	*cadena1;
	char	*cadena2;

	char	*cadena3;
	char	*cadena4;

	//char	*cadena5;
	//char	*cadena6;

	cadena1 = "";
	cadena2 = "";
	printf("mia: %c\n", ft_strstr(cadena1, cadena2)[0]);
	printf("original : %c\n", strstr(cadena1, cadena2)[0]);

	cadena3 = "hola que tal estás hoy";
	cadena4 = "z";
	//printf("mia: %c\n", ft_strstr(cadena3, cadena4)[0]);
	printf("original : %c\n", strstr(cadena3, cadena4)[0]);

	//cadena5 = "hola que tal estás hoy";
	//cadena6 = "";
	//printf("mia: %c\n", ft_strstr(cadena5, cadena6)[0]);
	//printf("original : %c\n", strstr(cadena5, cadena6)[0]);
}
