/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 14:54:09 by iniska            #+#    #+#             */
/*   Updated: 2023/07/18 14:54:16 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
//#include<stdio.h>

int	ft_strlen(char	*str)
{
	int	nb;

	nb = 0;
	while (*str++)
	{
		nb++;
	}
	return (nb);
}

char	*ft_strdup(char *str)
{
	char	*dest;
	char	i;

	i = 0;
	while (str[i])
		i++;
	dest = malloc(sizeof(str) * (i + 1));
	i = 0;
	if (dest == (NULL))
	{
		return (NULL);
	}
	else
	{
		while (str[i])
		{
			dest[i] = str[i];
			i++;
		}
		dest[i] = '\0';
		return (dest);
	}
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str		*stock;
	int						i;

	stock = malloc(sizeof(t_stock_str) * (ac + 1));
	if (stock == NULL)
	{
		free (stock);
		return (NULL);
	}
	i = 0;
	while (i < ac)
	{
		stock[i].size = ft_strlen(av[i]);
		stock[i].str = av[i];
		stock[i].copy = ft_strdup(av[i]);
		i++;
	}
	stock[i].str = 0;
	return (stock);
}
/*  
int main(void)
{
    char *ff[2] = {"dfdgbf", "fd"};
    //printf("%s", ft_strdup(ff));
    ft_strs_to_tab(2, ff);
}*/
