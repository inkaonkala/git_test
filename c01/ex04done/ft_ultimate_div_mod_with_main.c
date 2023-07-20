/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod_with_main.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 09:36:00 by iniska            #+#    #+#             */
/*   Updated: 2023/07/03 10:53:08 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	cal;

	cal = *a % *b;
	*a	= *a / *b;
	*b	= cal;	
}

int	main(void)
{
	int	a;
	int	b;
	a = 7;
	b = 5;
	ft_ultimate_div_mod(&a, &b);
	printf("%d\n", a);
	printf("%d\n", b);
	return (0);
}
