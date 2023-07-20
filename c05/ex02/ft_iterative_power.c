/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 06:37:07 by iniska            #+#    #+#             */
/*   Updated: 2023/07/11 17:45:21 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	num;
	int	ker;

	num = nb;
	ker = 1;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (ker < power)
	{
		nb = nb * num;
		ker ++;
	}
	return (nb);
}
/*
int	main()
{
	int	nb;
	int power;

	nb = 2;
	power = 4;
	ft_iterative_power(nb, power);
	printf("%d", ft_iterative_power(nb, power));
	return (0);
}*/
