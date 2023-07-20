/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 06:18:08 by iniska            #+#    #+#             */
/*   Updated: 2023/07/12 07:04:01 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	num;

	num = nb;
	if (power == 1)
	{
		return (nb);
	}
	if (power > 1)
	{
		return (num * ft_recursive_power(nb, power -1));
	}
	if (power == 1 || power == 0)
	{
		return (1);
	}
	return (0);
}
/*
int main()
{
	int	nb;
	int	power;

	nb = 2;
	power = 8;
	printf("%d", ft_recursive_power(nb,power));
}*/
