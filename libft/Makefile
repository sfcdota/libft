# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cbach <cbach@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/17 15:43:49 by cbach             #+#    #+#              #
#    Updated: 2020/05/24 17:35:20 by cbach            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

OBJECTS = *.o
FLAGS = -Wall -Wextra -Werror

.PHONY: all clean fclean re

all: $(NAME)
$(NAME): compile
	ar -rcs $(NAME) *.o
	ranlib $(NAME)
compile:
	gcc $(FLAGS) -c *.c
clean:
	@rm -f *.o
fclean: clean
	@rm -f $(NAME)


test: all do_test fclean
do_test:
	mv libft.a ../tests
	gcc $(FLAGS) ../tests/$(NAME) ../main.c -o ../tests/libft_test.out
	../tests/libft_test.out
rm_test:
	rm -f ../tests/libft_test.out ../tests/libft.a
re: fclean all

