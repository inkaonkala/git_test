/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 16:46:26 by iniska            #+#    #+#             */
/*   Updated: 2023/07/02 06:53:07 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int		num;

	num = '0';
	while (num <= '9')
	{
		write (1, &num, 1);
		num++;
	}
}

/* int	main(void)
{
	ft_print_numbers();
	return (0);
} */
