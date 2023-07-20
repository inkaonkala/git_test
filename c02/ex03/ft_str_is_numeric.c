/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 17:25:26 by iniska            #+#    #+#             */
/*   Updated: 2023/07/05 13:35:42 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_numeric(char *str)
{
	int	num;

	num = 0;
	if (str[num] == '\0')
	{
		return (1);
	}
	while (str[num] != '\0')
	{
		if (str[num] >= '0' && str[num] <= '9')
		{
			num ++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
//
//int main(void)
//{
//	printf("%d", ft_str_is_numeric("654"));
//	printf("\n%d", ft_str_is_numeric("2iamnotanumber"));
//	printf("\n%d", ft_str_is_numeric(""));
//	return (0);
//}
