/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_main_ft_strncat.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albzamor <albzamor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 13:29:01 by albzamor          #+#    #+#             */
/*   Updated: 2021/04/21 18:09:07 by albzamor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	unsigned int tamaño;

	tamaño = 3;
	char cadena1[100]="hola";
	char cadena2[100]="adios";
	char cadena3[100]="hola";
	char cadena4[100]="adios";


	printf("original %s\n", strncat(cadena2, cadena1,tamaño));
	printf("mio %s\n", ft_strncat(cadena4, cadena3,tamaño));
}
