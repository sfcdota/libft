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

NAME = libft.a
NAME_SO = libft.so

OBJECTS = *.o
FLAGS = -Wall -Wextra -Werror
FLAGS_SO = -Wall -Wextra -Werror

.PHONY: all clean fclean so re

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
	@rm -f $(NAME_SO)

test: all do_test fclean
do_test:
	mv libft.a ../tests
	gcc $(FLAGS) ../tests/$(NAME) ../main.c -o ../tests/libft_test.out
	../tests/libft_test.out
rm_test:
	rm -f ../tests/libft_test.out ../tests/libft.a
re: fclean all



so: $(NAME_SO)

$(NAME_SO): compile
	ar -rcs $(NAME_SO) *.o
	ranlib $(NAME_SO)
