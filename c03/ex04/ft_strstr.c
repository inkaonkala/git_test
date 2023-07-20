/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:07:48 by iniska            #+#    #+#             */
/*   Updated: 2023/07/09 14:46:34 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	eye;
	int	needle;

	eye = 0;
	needle = 0;
	if (to_find[needle] == '\0')
	{
		return (str);
	}
	while (str[eye] != '\0')
	{
		while (str[eye + needle] == to_find[needle])
		{
			if (to_find[needle +1] == '\0')
				return (str + eye);
			needle++;
		}
		if (str[eye + needle] != to_find[needle])
		{
			eye++;
			needle = 0;
		}
	}
	return (0);
}
/*
int	main()
{
	char	str[] = "meow cat meow";
	char	find[] = "cat";
	printf("%s", ft_strstr(str, find));
}*/
