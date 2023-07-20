/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 16:46:32 by iniska            #+#    #+#             */
/*   Updated: 2023/07/05 17:31:22 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strupcase(char *str)
{
	int	abc;

	abc = 0;
	while (str[abc] != '\0')
	{
		if (str[abc] >= 97 && str[abc] <= 122)
		{
		str[abc] -= 32;
		}
			abc++;
	}
	return (str);
}
//
//int main()
//{
//	char str[] = "i can only shout";
//	printf("%s", ft_strupcase(str));
//}
