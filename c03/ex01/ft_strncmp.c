/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 11:13:42 by iniska            #+#    #+#             */
/*   Updated: 2023/07/09 10:47:16 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	str;

	str = 0;
	if (n != 0)
	{
		while (s1[str] == s2[str] && --n && *s1)
		{
			s1++;
			s2++;
		}
		return (s1[str] - s2[str]);
	}
	return (0);
}
/*
int main()
{
	printf("%d", ft_strncmp("kissa", "kissakoira", 5));
	printf("\n%d", ft_strncmp("kissa", "kissakoira", 7));
	printf("\n%d", ft_strncmp("kissa", "kisu", 4));
	printf("\n%d", ft_strncmp("", "", 2));
	return (0);
}*/
