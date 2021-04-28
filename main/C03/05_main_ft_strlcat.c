/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albzamor <albzamor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 13:29:01 by albzamor          #+#    #+#             */
/*   Updated: 2021/04/21 16:33:40 by albzamor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlen(char *str);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);


int	main(void)
{


	char	origen [20] = "hoda";
	char	destino [100] = "madrid";
	char	destino2 [100] = "madrid";
	//char	*origen2;
	//char	*destino2;
	int tamaño;
	unsigned int a;
	unsigned int b;

	//origen = "hola";
	//destino = "luis";
	//origen2 = "hola";
	//destino2 = destino;
	tamaño = 9;

	//printf("original %lu", strlcat(destino, origen, tamaño));
	a = strlcat(destino, origen, tamaño);
	printf("original %i  %s\n", a, destino);

	b = ft_strlcat(destino2, origen, tamaño);
	printf("     mia %i  %s\n", b, destino2);


}
