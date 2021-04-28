/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swapmain.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albzamor <albzamor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 12:36:52 by albzamor          #+#    #+#             */
/*   Updated: 2021/04/14 13:35:42 by albzamor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_swap(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;
	int	*pa;
	int	*pb;

	a = 1;
	b = 2;
	pa = &a;
	pb = &b;
	printf("el valor de a es %d\n", *pa);
	printf("el valor de b es %d\n", b);
	ft_swap(pa, pb);
	printf("el valor de a es %d\n", a);
	printf("el valor de b es %d\n", b);
}
