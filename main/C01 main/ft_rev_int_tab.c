/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albzamor <albzamor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 20:00:46 by rufernan          #+#    #+#             */
/*   Updated: 2021/04/22 19:32:30 by albzamor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		iterator;
	int		tab2;

	iterator = 0;
	while (iterator < size / 2)
	{
		tab2 = tab[iterator];
		tab[iterator] = tab[(size - 1) - iterator];
		tab[(size - 1) - iterator] = tab2;
		iterator++;
	}
	prinf("%d", tab);
}
