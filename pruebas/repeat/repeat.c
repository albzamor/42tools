/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albzamor <albzamor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 10:49:14 by albzamor          #+#    #+#             */
/*   Updated: 2021/04/29 11:56:27 by albzamor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char	**argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				j = argv[1][i] - 'a';
				while (j > 0)
				{
					write (1, &argv[1][i], 1);
					j--;
				}
			}
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				j = argv[1][i] - 'A';
				while (j > 0)
				{
					write (1, &argv[1][i], 1);
					j--;
				}
			}
			write (1, &argv[1][i], 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
}
