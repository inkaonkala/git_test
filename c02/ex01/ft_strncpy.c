/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 11:05:40 by iniska            #+#    #+#             */
/*   Updated: 2023/07/06 14:29:47 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	str;

	str = 0;
	while (src[str] != '\0' && str < n)
	{
		dest[str] = src[str];
		str++;
	}
	while (str < n)
	{
		dest[str] = '\0';
		str ++;
	}
	return (dest);
}
//
//int	main()
//{
//	char	src[] = "Bananananana!";
//	char	dest[500] = "";
//
//	ft_strncpy(dest, src, 6);
//	printf("%s", dest);
//}
