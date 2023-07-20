/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   letter.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 09:56:11 by iniska            #+#    #+#             */
/*   Updated: 2023/06/30 11:00:11 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_letter(void)
{
	int	lettera;
		lettera = ('A');
		while (lettera <= 'Z');
	{
		write (1, &lettera, 1);
		lettera +++;
	}

	int	letterb;
		letterb = ('b');
		while (letter b <= 'y');
	{
		write (1, &letterb, 1);
		letterb +++;
	}
}
int	main (void)
{
	ft_print_letter();
	return (0);
}
