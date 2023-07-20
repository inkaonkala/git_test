#!/bin/sh
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iniska <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/18 09:37:35 by iniska            #+#    #+#              #
#    Updated: 2023/07/18 09:37:35 by iniska           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc -Wall -Wextra -Werror -c ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c

ar cr libft.a ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

rm *.o
