/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_main_ft_iterative_power.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albzamor <albzamor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 14:35:29 by albzamor          #+#    #+#             */
/*   Updated: 2021/04/25 18:26:00 by albzamor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int potencia);

int	main(void)
{
	int	numero;
	int potencia;
	numero = 2;
	potencia = 4;
	printf("numero%i potencia%i\n", numero, potencia);
	printf("%i\n", ft_iterative_power(numero, potencia));
}
