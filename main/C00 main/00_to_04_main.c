/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_004main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albzamor <albzamor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 10:48:53 by albzamor          #+#    #+#             */
/*   Updated: 2021/04/14 14:48:41 by albzamor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c);
void	ft_print_alphabet(void);
void	ft_print_reverse_alphabet(void);
void	ft_print_numbers(void);
void	ft_is_negative(int n);

int	main(void)
{
	printf("\nEX00-ft_putchar\n");
	ft_putchar('c');
	printf("\n\nEX01-print_alphabet\n");
	ft_print_alphabet();
	printf("\n\nEX02-print_reverse_alphabet\n");
	ft_print_reverse_alphabet();
	printf("\n\nEX03-print_number\n");
	ft_print_numbers();
	printf("\n\nEX04-ft_isnegative\n");
	printf("Prueba -1\n");
	ft_is_negative(-1);
	printf("\nPrueba 0\n");
	ft_is_negative(0);
	printf("\nPrueba 4\n");
	ft_is_negative(4);
	printf("\n");
}
