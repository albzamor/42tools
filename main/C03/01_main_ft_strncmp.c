/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albzamor <albzamor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 13:29:01 by albzamor          #+#    #+#             */
/*   Updated: 2021/04/20 18:54:07 by albzamor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	unsigned int tamaño;
	char	*cadena1;
	char	*cadena2;
	char	*cadena3;
	char	*cadena4;

	tamaño=2;
	cadena1 = "123";
	cadena2 = "1234";
	cadena3 = "123";
	cadena4 = "12";
	printf("original s1=s2 %d\n", strncmp(cadena1, cadena3, tamaño));
	printf("propia s1=s2 %d\n\n", ft_strncmp(cadena1, cadena3, tamaño));
	printf("original s1>s2 %d\n", strncmp(cadena2, cadena1, tamaño));
	printf("propia s1>s2 %d\n\n", ft_strncmp(cadena2, cadena1, tamaño));
	printf("original s1<s2 %d\n", strncmp(cadena4, cadena1, tamaño));
	printf("propia s1<s2 %d\n\n", ft_strncmp(cadena4, cadena1, tamaño));
}
