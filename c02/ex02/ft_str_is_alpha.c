/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 16:32:22 by iniska            #+#    #+#             */
/*   Updated: 2023/07/06 15:19:13 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_alpha(char *str)
{
	int	inp;

	inp = 0;
	if (str[inp] == '\0')
	{
		return (1);
	}
	while (str[inp] != '\0')
	{
		if ((str[inp] >= 'A' && str[inp] <= 'Z')
			|| (str[inp] >= 'a' && str[inp] <= 'z'))
		{
			inp++;
		}
		else
		{
			return (0);
		}	
	}
	return (1);
}
//
//int	main()
//{
//	printf("%d", ft_str_is_alpha("catsdogsaandprettyfowers"));
//	printf("\n%d", ft_str_is_alpha("i9987987987"));
//	printf("\n%d", ft_str_is_alpha(""));
//}
