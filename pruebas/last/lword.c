/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lword.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albzamor <albzamor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 15:57:08 by albzamor          #+#    #+#             */
/*   Updated: 2021/04/28 17:54:26 by albzamor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_srtlg(char *srl);

int	main(int argc, char **argcv)
{

	if (argc == 2)
	{
		int i;
		int size;
		int posicionlw;

		i = 1;
		size = ft_srtlg(argcv[1]);
		//printf("tamaño cadena:%i\n", size);


		while  ((argcv[1][size - i] == ' ') || (argcv[1][size - i] == '\t'))
			size--;

		/* if (size == 0)
		{
			write (1, "\n", 1);
			return(0);
		} */

		//printf("tamaño cadena:%i\n", size);

		while ((argcv[1][size - i] != ' ') && (argcv[1][size - i] != '\t') && (argcv[1][size - i] != '\0') )
		{
			i++;
		}
		//printf("i:%i\n", i);

		posicionlw = size - i + 1;
		//printf("posicionlw:%i\n", posicionlw);

		while ( posicionlw < size)
		{
			write (1, &argcv[1][posicionlw], 1);
			posicionlw++;
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
