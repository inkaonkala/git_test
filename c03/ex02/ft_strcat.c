/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 12:42:14 by iniska            #+#    #+#             */
/*   Updated: 2023/07/09 10:57:34 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	ab;
	int	bc;

	ab = 0;
	while (dest[ab] != '\0')
	{
		ab++;
	}
	bc = 0;
	while (src[bc] != '\0')
	{
		dest[ab] = src[bc];
		ab++;
		bc++;
	}
	dest[ab] = '\0';
	return (dest);
}
/*
int	main()
{
	char src[] = "ana";
	char dest[200] = "ban";
	printf("%s", ft_strcat(dest, src));
}*/
