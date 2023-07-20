/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 09:28:12 by iniska            #+#    #+#             */
/*   Updated: 2023/07/16 15:42:58 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *s)
{
	char	i;

	i = 0;
	while (*s++)
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*copy;
	int		i;

	i = 0;
	copy = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!copy)
	{
		return (NULL);
	}
	while (*src)
	{
		copy[i++] = *src++;
	}
	copy[i] = '\0';
	{
		return (copy);
	}
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	*strng;
	char	*cop;
	
	if (argc == 2)
	{
		strng = ft_strdup(argv[1]);
		cop = ft_strdup(argv[1]);
		printf("%s", strng, cop);
	}
	return (0);
}*/
