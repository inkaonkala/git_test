/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 09:56:58 by iniska            #+#    #+#             */
/*   Updated: 2023/07/17 10:17:37 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*array;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	array = (int *)malloc(sizeof(int) * (max - min));
	if (array == NULL)
	{
		*range = NULL;
		return (-1);
	}
	else
	{
		i = (-1);
		while (i++ < (max - 1) - min)
		{
			array[i] = min + i;
		}
		*range = array;
		return (i);
	}
}
/*
#include <stdio.h>
 
int    main(void)
{
    int    min;
    int    max;
    int    *tab;
    int    size;
    int    i;
 
    i = 0;
    min = 2;
    max = 8;
    size = ft_ultimate_range(&tab, min, max);
    while(i < size)
    {
        printf("%d, ", tab[i]);
        i++;
    }
}*/
