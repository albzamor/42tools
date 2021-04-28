/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_main_ft_recursive_factorial.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albzamor <albzamor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 14:35:08 by albzamor          #+#    #+#             */
/*   Updated: 2021/04/25 18:10:37 by albzamor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	main(void)
{
	int	a;
	a = 4;
	printf("%d\n", a);
	printf("%i\n", ft_recursive_factorial(a));
}
