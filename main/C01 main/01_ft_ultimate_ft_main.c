/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_ft_ultimate_ft_main.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albzamor <albzamor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 14:51:13 by albzamor          #+#    #+#             */
/*   Updated: 2021/04/15 16:56:34 by albzamor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int	a;
	int	*p;
	int	**p1;
	int	***p2;
	int	****p3;
	int	*****p4;
	int	******p5;
	int	*******p6;
	int	********p7;
	int	*********p8;

	a = 1;

	p8 = &p7;
	p7 = &p6;
	p6 = &p5;
	p5 = &p4;
	p4 = &p3;
	p3 = &p2;
	p2 = &p1;
	p1 = &p;
	p = &a;

	printf("el valor de p es %d\n", a);
	ft_ultimate_ft(p8);
	printf("el valor de p es %d\n", a);
}
