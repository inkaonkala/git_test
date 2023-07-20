/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 17:42:55 by iniska            #+#    #+#             */
/*   Updated: 2023/07/16 15:55:23 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*array;

	if (min >= max)
	{
		return (NULL);
	}
	array = (int *)malloc(sizeof(int) * (max - min));
	if (array == NULL)
	{
		return (NULL);
	}
	else
	array = (int *)malloc(sizeof(int) * (max - min));
	{
		i = 0;
		while (min < max)
		{
			array[i] = min;
			min++;
			i++;
		}
		return (array);
	}
}
/*
#include <stdio.h>

int main(void)
{
    int    min;
    int    max;
    int    *tab;
    int    i = 0;
    int    size;

    min = 5;
    max = 10;
    size = max - min;
    tab = ft_range(min, max);
    while(i < size)
    {
        printf("%d, ", tab[i]);
        i++;
    }
}*/
