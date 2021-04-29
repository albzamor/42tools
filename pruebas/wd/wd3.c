/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wd3.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albzamor <albzamor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 19:21:59 by albzamor          #+#    #+#             */
/*   Updated: 2021/04/28 21:12:14 by albzamor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

//wdmatch "faya" "fgvvfdxcacpolhyghbreda" | cat -e

int	ft_srtlg(char *srl);

int	main(int argc, char **argcv)
{

	int i;
	int j;
	int size;
	int n;
	int flag;

	i = 0;
	j = 0;
	n = 0;
	flag = 0;


	//printf("tamaño:%d\n", size);

	if (argc == 3)
	{
		size = ft_srtlg(argcv[1]);
		while ((argcv[2][i] != '\0'))
		{
			while ((argcv[2][i] == argcv[1][j]) && (argcv[1][j] != '\0' ))
			{
				i++;
				j++;
				flag++;
			}
			//printf("flag %d\n", flag);
			if (flag == size )
			{
				while ( n < size )
				{
					write (1, &argcv[1][n], 1);
					n++;
				}
				break;
			}
			else
			{
				i++;
			}
		}
		write (1, "\n", 1);


	}
	else
		write (1, "\n", 1);



}

int	ft_srtlg(char *srl)
{
	int i;
	i = 0;

	while (srl[i] != '\0')
		i++;

	return(i);
}
