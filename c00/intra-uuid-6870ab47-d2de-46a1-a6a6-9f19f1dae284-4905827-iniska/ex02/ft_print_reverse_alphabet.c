/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eka.cc                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 13:54:20 by iniska            #+#    #+#             */
/*   Updated: 2023/06/30 08:48:32 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char letter)
{
	write (1, &letter, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char	abc;

	abc = ('z');
	while (abc >= 'a')
	{
		ft_putchar(abc);
		abc--;
	}
}

/* int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
} */
