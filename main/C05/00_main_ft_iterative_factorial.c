/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_main_ft_iterative_factorial.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albzamor <albzamor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 14:34:32 by albzamor          #+#    #+#             */
/*   Updated: 2021/04/25 17:58:30 by albzamor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	int	a;

	a = 4;
	printf("%d\n", a);
	printf("%i\n", ft_iterative_factorial(a));
}
