/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albzamor <albzamor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 13:29:01 by albzamor          #+#    #+#             */
/*   Updated: 2021/04/21 13:46:17 by albzamor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	*cadena1;
	char	*cadena2;
	char	*cadena3;
	char	*cadena4;

	cadena1 = "jkl";
	cadena2 = "jkq";
	cadena3 = "123";
	cadena4 = "12";
	printf("original s1=s2 %d\n", strcmp(cadena1, cadena2));
	printf("propia s1=s2 %d\n\n", ft_strcmp(cadena1, cadena2));
	printf("original s1>s2 %d\n", strcmp(cadena3, cadena4));
	printf("propia s1>s2 %d\n\n", ft_strcmp(cadena3, cadena4));
	//printf("original s1<s2 %d\n", strcmp(cadena5, cadena6));
	//printf("propia s1<s2 %d\n\n", ft_strcmp(cadena5, cadena6));
}
