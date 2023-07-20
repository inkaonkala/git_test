/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 07:14:06 by iniska            #+#    #+#             */
/*   Updated: 2023/07/10 06:30:41 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strlen(char *str)
{
	int	num;

	num = 0;
	while (str[num] != '\0')
	{
		num++;
	}
	return (num);
}
/*
int	main ()
{
	char str[] = "I want to buy some apples";

	printf("%d", ft_strlen(str));
	return (0);
}*/
