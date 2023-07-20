/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 15:14:29 by iniska            #+#    #+#             */
/*   Updated: 2023/07/06 06:58:44 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	str;

	str = 0;
	while (src[str] != '\0')
	{
		dest[str] = src[str];
		str++;
	}
	dest[str] = 0;
	return (dest);
}
//
//int main()
//{
//	char src[] = "Not pretty";
//	char src1[] = "Not pretty";
//
//	char dest[] = "cat";
//	char dest1[] = "cat";
//
//	printf("%s", ft_strcpy(dest, src));
//	printf("\n%s", ft_strcpy(dest1, src1));
//}
