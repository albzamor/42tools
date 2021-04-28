/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_main_ft_fibonacci.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albzamor <albzamor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 14:37:13 by albzamor          #+#    #+#             */
/*   Updated: 2021/04/25 18:54:54 by albzamor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index);

int	main(void)
{
	int	numero;

	numero = 3;
	printf("numero%i \n", numero);
	printf("%i\n", ft_fibonacci(numero));
}
