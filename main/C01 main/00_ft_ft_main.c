/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_ft_ftmain.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albzamor <albzamor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 13:53:31 by albzamor          #+#    #+#             */
/*   Updated: 2021/04/14 14:47:22 by albzamor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{

   int	a;
   int *p;

	a = 13;
	p = &a;

	printf("el valor de a es %d\n", a);
	ft_ft(p);
	printf("el valor de a es %d\n", a);
}
