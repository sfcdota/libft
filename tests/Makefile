# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cbach <cbach@student.21-school.ru>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/17 15:43:49 by cbach             #+#    #+#              #
#    Updated: 2020/05/17 15:43:49 by cbach            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Wextra -Werror

all: test

test: libbuild compilerun clear

libbuild:
	gcc $(FLAGS) -c ../libft/*.c
	ar -rcs libft.a *.o
	ranlib libft.a
	rm *.o
compilerun:
	gcc $(FLAGS) main.c -L. -lft -o f
	./f
clear:
	rm f libft.a
