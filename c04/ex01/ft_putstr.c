/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 08:17:37 by iniska            #+#    #+#             */
/*   Updated: 2023/07/10 06:32:38 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <string.h>

void	ft_putstr(char *str)
{
	int	abc;

	abc = 0;
	while (str[abc] != '\0')
	{
		write (1, &str[abc], 1);
		abc ++;
	}
}
/*
int main(void)
{
	char str[] = "7 monkeys playing :D";
	ft_putstr(str);
	return (0);
}*/
