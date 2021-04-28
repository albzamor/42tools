/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_main_ft_sqrt.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albzamor <albzamor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 14:37:40 by albzamor          #+#    #+#             */
/*   Updated: 2021/04/25 18:46:59 by albzamor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	resultado;

	resultado = 1;
	if (nb < 0)
		return (0);
	while (resultado * resultado < nb)
		++resultado;
	if (resultado * resultado == nb)
		return (resultado);
	return (0);
}
