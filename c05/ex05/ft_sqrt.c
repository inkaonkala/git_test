/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:28:18 by iniska            #+#    #+#             */
/*   Updated: 2023/07/12 07:06:30 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	a;

	a = 1;
	if (nb > 2147395600)
	{
		return (0);
	}
	while (a * a != nb && (a * a < nb))
	{
		a++;
	}
	if (a * a == nb)
	{
		return (a);
	}
	else
	{
		return (0);
	}
}
/*
int main()
{
	int	nb;
	nb =  16;
	printf("%d", ft_sqrt(nb));
	return (0);
}*/