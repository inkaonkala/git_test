/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toka.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 08:32:32 by iniska            #+#    #+#             */
/*   Updated: 2023/06/29 12:44:47 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar(char letter)
{
	write (1, &letter, 1);
}
void ft_print_alphabet(void)
{
	char abc = 'a';
	while (abc <= 'z')
	{
		ft_putchar (abc);
		abc ++;
	}
}
int main(void)
{
	void ft_print_alphabet();
	return 0;
}

