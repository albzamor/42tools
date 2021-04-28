/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_main_ft_recursive_power.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albzamor <albzamor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 14:35:50 by albzamor          #+#    #+#             */
/*   Updated: 2021/04/25 18:34:38 by albzamor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int	main(void)
{
	int	numero;
	int potencia;
	numero = 2;
	potencia = 4;
	printf("numero%i potencia%i\n", numero, potencia);
	printf("%i\n", ft_recursive_power(numero, potencia));
}

