/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 17:36:33 by iniska            #+#    #+#             */
/*   Updated: 2023/07/06 09:18:21 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strlowcase(char *str)
{
	int	abc;

	abc = 0;
	while (str[abc] != '\0')
	{
		if (str[abc] >= 65 && str[abc] <= 90)
		{
			str[abc] += 32;
		}
		abc++;
	}
	return (str);
}
//
//int main()
//{
//	char str[] = "I DONT LIKE TO SHOUT";
//	printf("%s", ft_strlowcase(str));
//}
