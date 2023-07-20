/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 15:27:37 by iniska            #+#    #+#             */
/*   Updated: 2023/07/06 09:19:10 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_printable(char *str)
{
	int	cha;

	cha = 0;
	if (str[cha] == '\0')
	{
		return (1);
	}
	while (str[cha] != '\0')
	{
		if (str[cha] >= 32 && str[cha] <= 126)
			cha++;
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
//	printf("%d", ft_str_is_printable(""));
//	printf("\n%d", ft_str_is_printable("Iwontswearatyou"));
//	printf("\n%d", ft_str_is_printable("änkyrä"));
//}
