/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_ft_strlen-main.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albzamor <albzamor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 11:16:24 by albzamor          #+#    #+#             */
/*   Updated: 2021/04/15 13:03:06 by albzamor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str);

int	main(void)

{
	int i;

	//i = 2;
	//char *cadena;
	//cadena = "hola";
	char cadena[] = "cadena";
	ft_strlen(cadena);
	i = ft_strlen(cadena);
	printf("longitud: %i", i);
}
