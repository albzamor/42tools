/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_ft_ultimate_div_mod_main.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albzamor <albzamor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 12:36:52 by albzamor          #+#    #+#             */
/*   Updated: 2021/04/14 19:04:37 by albzamor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{

	int	*punta;
	int	*puntb;
	int a;
	int	b;

	a = 4;
	b = 2;

	punta = &a;
	puntb = &b;


	ft_ultimate_div_mod(punta, puntb);
	printf("el valor de a es %d\n", *punta);
	printf("el valor de a es %d\n", *puntb);

}
