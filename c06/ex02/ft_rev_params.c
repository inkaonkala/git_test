/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 15:29:16 by iniska            #+#    #+#             */
/*   Updated: 2023/07/12 16:08:52 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	a;

	a = argc -1;
	while (a > 0)
	{
		i = 0;
		while (argv[a][i] != '\0' && argc)
		{
			ft_putchar(argv[a][i]);
			i++;
		}
		ft_putchar('\n');
		a--;
	}
	return (0);
}
