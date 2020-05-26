# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cbach <cbach@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/17 15:43:49 by cbach             #+#    #+#              #
#    Updated: 2020/05/26 21:01:23 by cbach            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	libft.a
NAME_SO = libft.so
HEAD =	libft.h
FLAGS =

SRC =						\
		ft_atoi.c			\
		ft_bzero.c			\
		ft_isalnum.c		\
		ft_isalpha.c		\
		ft_isascii.c		\
		ft_isdigit.c		\
		ft_isprint.c		\
		ft_itoa.c			\
		ft_memchr.c			\
		ft_memcmp.c			\
		ft_memmove.c		\
		ft_memset.c			\
		ft_putchar_fd.c		\
		ft_putendl_fd.c		\
		ft_putnbr_fd.c		\
		ft_putstr_fd.c		\
		ft_split.c			\
		ft_strchr.c			\
		ft_strjoin.c		\
		ft_strlcat.c		\
		ft_strlcpy.c		\
		ft_strlen.c			\
		ft_strmapi.c		\
		ft_strncmp.c		\
		ft_strrchr.c		\
		ft_strtrim.c		\
		ft_substr.c			\
		ft_tolower.c		\
		ft_toupper.c		\
		ft_calloc.c			\
		ft_memccpy.c		\
		ft_memcpy.c			\
		ft_strdup.c			\
		ft_strnstr.c		\

BONUS =						\
		ft_lstnew.c			\
		ft_lstadd_front.c	\
		ft_lstsize.c		\
		ft_lstlast.c		\
		ft_lstadd_back.c	\
		ft_lstdelone.c		\
		ft_lstclear.c		\
		ft_lstiter.c		\
		ft_lstmap.c

OBJ = $(patsubst %.c, %.o, $(SRC))
OBJ_BONUS = $(patsubst %.c, %.o, $(BONUS))

.PHONY: all bonus clean fclean re so

all: $(NAME)

$(NAME): $(OBJ)
	@ar -rcs $(NAME) $?

bonus: $(NAME) $(OBJ_BONUS)
	@ar -rs $(NAME) $?

%.o : %.c $(HEAD)
	@gcc $(FLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	@rm -f $(NAME)
	@rm -f $(NAME_SO)

$(BONUS):
	@ar -rcs $(NAME) $
re: fclean all

so: $(NAME_SO)

$(NAME_SO):
	@gcc -c -fPIC *.c
	@gcc -shared -o libft.so *.o
