/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_ft_putstr_main.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albzamor <albzamor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 19:14:37 by albzamor          #+#    #+#             */
/*   Updated: 2021/04/15 10:29:55 by albzamor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str);

int	main(void)

{
	//char *cadena;
	//cadena = "hola";
	char cadena[] = "cadena";
	ft_putstr(cadena);
}
