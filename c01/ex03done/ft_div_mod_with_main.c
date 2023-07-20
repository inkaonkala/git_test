/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 08:35:38 by iniska            #+#    #+#             */
/*   Updated: 2023/07/03 08:50:13 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	*div;
	int	*mod;
	a	= 5;
	b	= 2;
	div	= a / b;
	mod	= a % b;
	printf("%d\n", div);
	printf("%d\n", mod);
	return (0);
}*/cd
