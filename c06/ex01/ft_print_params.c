/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 08:12:40 by iniska            #+#    #+#             */
/*   Updated: 2023/07/13 10:24:15 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	a;

	a = 1;
	while (a < argc)
	{
		i = 0;
		while (argv[a][i] != '\0' )
		{
			ft_putchar(argv[a][i]);
			i++;
		}
		ft_putchar('\n');
		a++;
	}
	return (0);
}
