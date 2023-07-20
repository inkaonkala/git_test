/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 13:37:11 by iniska            #+#    #+#             */
/*   Updated: 2023/07/05 14:33:06 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_uppercase(char *str)
{
	int	abu;

	abu = 0;
	if (str[abu] == '\0')
	{
		return (1);
	}
	while (str[abu] != '\0')
	{
		if (str[abu] >= 'A' && str[abu] <= 'Z')
			abu++;
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
//	printf("%d", ft_str_is_uppercase("YOU"));
//	printf("\n%d", ft_str_is_uppercase("are my little"));
//	printf("\n%d", ft_str_is_uppercase("nmb 1!"));
//	printf("\n%d", ft_str_is_uppercase(""));
//	return (0);
//}
