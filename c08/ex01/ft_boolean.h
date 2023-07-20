/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iniska <iniska@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 14:52:15 by iniska            #+#    #+#             */
/*   Updated: 2023/07/18 14:52:27 by iniska           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define EVEN(var) ((var % 2) == 0)

# define TRUE	1
# define FALSE	0

# define EVEN_MSG	"I have an even number of arguments.\n"
# define ODD_MSG	"I have an odd number of arguments.\n"

# define SUCCESS	0

typedef int	t_bool;

#endif
