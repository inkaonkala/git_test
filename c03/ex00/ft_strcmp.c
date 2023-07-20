/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 08:38:11 by iniska            #+#    #+#             */
/*   Updated: 2023/07/09 08:36:03 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
int main()
{
	printf("%d", ft_strcmp("kissa", "kissa"));
	printf("\n%d", ft_strcmp("kissa", "kis"));
	printf("\n%d", ft_strcmp("kissa", "kissakissa"));
	return(0);
}*/
