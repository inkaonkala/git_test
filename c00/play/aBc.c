/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aBc.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 11:23:13 by iniska            #+#    #+#             */
/*   Updated: 2023/06/30 13:05:58 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main()
{
	write(1, &"aBcDeFg\n", 8);
	return(0);
}
