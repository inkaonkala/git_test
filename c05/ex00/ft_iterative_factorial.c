/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 07:29:28 by iniska            #+#    #+#             */
/*   Updated: 2023/07/13 06:33:05 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	k;

	k = nb -1;
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	if (nb < 0)
	{
		return (0);
	}
	if (nb >= 2)
	{
		while (k >= 1)
		{
			nb *= k;
			k--;
		}
	}
	return (nb);
}
/*
int	main()

{
	int	num;
	num = 6;
	printf("%d", ft_iterative_factorial(num));
	return(0);
}*/
