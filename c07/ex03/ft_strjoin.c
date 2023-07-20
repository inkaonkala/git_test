/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 07:11:20 by iniska            #+#    #+#             */
/*   Updated: 2023/07/17 12:26:50 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	char	i;

	i = 0;
	while (*str++)
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_final_lenght(char **strs, int size, int sep_l)
{
	int	fin_len;
	int	i;

	fin_len = 0;
	i = 0;
	while (i < size)
	{
		fin_len += ft_strlen(strs[i]);
		fin_len += sep_l;
		i++;
	}
	fin_len -= sep_l;
	return (fin_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		full;
	int		i;
	char	*dest;
	char	*source;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	full = ft_final_lenght(strs, size, ft_strlen(sep));
	dest = (char *)malloc((full + 1) * sizeof(char));
	source = dest;
	if (!source)
		return (0);
	i = -1;
	while (i++ < size)
	{
		source = ft_strcpy(source, strs[i]);
		source += ft_strlen(strs[i]);
		if (i < size -1)
		{
			source = ft_strcpy(source, sep);
			source += ft_strlen(sep);
		}	
	}
	*source = '\0';
	return (dest);
}

 #include <stdio.h>
#include <string.h>

 int main(void)
 {
     char    **strs;
     char    *separator;
     char    *result;
     int     size = 3;
     strs = (char **)malloc(size * sizeof(char *));
     strs[0] = (char *)malloc((strlen("I like") + 1) * sizeof(char));
     strs[1] = (char *)malloc((strlen("banananas") + 1) * sizeof(char));
     strs[2] = (char *)malloc((strlen("and lemons :)") + 1) * sizeof(char));
     strcpy(strs[0], "I like");
     strcpy(strs[1], "banananas");
     strcpy(strs[2], "and lemons :)");
     separator = " ";
     result = ft_strjoin(size, strs, separator);
     printf("%s$\n", result);
     free(result);
     free(strs[0]);
     free(strs[1]);
     free(strs[2]);
     free(strs);
     return (0);
 }
