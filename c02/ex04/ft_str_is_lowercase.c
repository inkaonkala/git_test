/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 11:01:18 by iniska            #+#    #+#             */
/*   Updated: 2023/07/06 09:16:33 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_lowercase(char *str)
{
	int	abc;

	abc = 0;
	if (str[abc] == '\0')
	{
		return (1);
	}
	while (str[abc] != '\0')
	{
		if (str[abc] >= 'a' && str[abc] <= 'z')
		abc++;
		else
		{
			return (0);
		}
	}
	return (1);
}
//
//int main()
//{
//	printf("%d", ft_str_is_lowercase("Ithink"));
//	printf("\n%d", ft_str_is_lowercase("abouteating"));
//	printf("\n%d", ft_str_is_lowercase("7 pizzas today"));
//	printf("\n%d", ft_str_is_lowercase(""));
//}
