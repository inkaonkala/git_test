/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 12:36:56 by iniska            #+#    #+#             */
/*   Updated: 2023/07/11 17:54:07 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	if (index < 2)
	{
		return (index);
	}
	else
	{
		return (ft_fibonacci(index -1) + ft_fibonacci(index -2));
	}
}
/*
int main()
{
	int index;

	index = 8;
	printf("%d", ft_fibonacci(index));
	return (0);
}*/
