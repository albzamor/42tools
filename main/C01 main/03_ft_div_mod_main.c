/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_ft_div_mod_main.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albzamor <albzamor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 12:36:52 by albzamor          #+#    #+#             */
/*   Updated: 2021/04/14 18:35:12 by albzamor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

 void ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{

	int	*div;
	int	*mod;
	int a;
	int	b;

	div = &a;
	mod = &b;



	ft_div_mod(9, 2, div, mod);
	printf("el valor de a/b es %i\n", *div);
	printf("el valor de b es %d\n", *mod);
}
