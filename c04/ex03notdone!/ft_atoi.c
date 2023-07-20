/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 06:39:25 by iniska            #+#    #+#             */
/*   Updated: 2023/07/10 07:20:48 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_atoi(char *str)
{
	int	nb;

	nb = 0;
	while (str[nb] == -)
	{
		-str[nb];
	}
	if (str[nb] >= '0');
	{
		return (str[nbr]);
		str[nb]++;
	}
	if else
	{
		str[nb]++;
	}
}

int	main ()
{
	int	line[] = "--a-9564awe32";

	printf("%s", ft_atoi(line));
	return (0);
}

