/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 13:48:14 by iniska            #+#    #+#             */
/*   Updated: 2023/07/04 08:42:36 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	char	nbr;

	nbr = 0;
	while (*(str + nbr))
	++ nbr;
	return (nbr);
}
/*
int	main(void)
{
	char	*str;

	str = "i like cats";
	printf("%d", ft_strlen(str));
	return (0);
}*/
