/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_main_ft_strcat.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albzamor <albzamor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 13:29:01 by albzamor          #+#    #+#             */
/*   Updated: 2021/04/21 19:16:14 by albzamor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	//char	*cadena1;
	//char	*cadena2;

	//cadena1 = "hola";
	//cadena2 = "adios";
	//char a;
	//char b;
	char cadena1[]="hola";
	char cadena2[]="adios";
	char cadena3[]="hola";
	char cadena4[]="adios";


	printf("original %s\n", strcat(cadena2, cadena1));
	printf("mio %s\n", ft_strcat(cadena4, cadena3));
}
