/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbach <cbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 19:14:31 by cbach             #+#    #+#             */
/*   Updated: 2020/05/26 01:17:05 by cbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int		words_count(char const *s, char c)
{
	int i;

	i = 0;
	while (*s)
		if(*s++ == c)
			i++;
	return (i ? i + 1 : 0);
}

static int		word_length(char const *s, char c)
{
	int i;

	i = 0;
	while (*s++ != c)
		i++;
	return (i);
}

static char	*next_word(char const *s, char c)
{
	while (*s == c && c)
		s++;
	return ((char *)s);
}

static char	*copy_word(char const *s, char c, int length)
{
	char *w;

	w = malloc(length + 1);
	if (w)
	{
		while (*s != c)
			*w++ = *s++;
		*w = '\0';
	}
	return (w);
}
char	**ft_split(char const *s, char c)
{
	char	**t;
	int		words;

	if (s)
	{
		words = words_count(s, c);
		t = malloc(words * sizeof(char *));
		if (t)
		{
			while(*s)
			{
				*t = malloc(word_length(s, c) + 1);
				if (!*t)
					return (NULL);
				*t++ = copy_word(s, c, word_length(s, c));
				s = next_word(s, c);
			}
		}
		return (t);
	}
	return (NULL);
}
