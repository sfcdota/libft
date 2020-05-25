/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbach <cbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/23 22:29:54 by cbach             #+#    #+#             */
/*   Updated: 2020/05/25 19:43:13 by cbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int		is_in_set(char c, char const *set)
{
	while (set && *set)
		if (c == *set++)
			return (1);
	return (0);
}

static int		begin(char const *s1, char const *set)
{
	int i;

	i = 0;
	while (is_in_set(*s1, set) && *s1++)
		i++;
	return (i);
}

static int		end(char const *s1, char const *set, int strlen)
{
	int i;

	i = 0;
	while (is_in_set(*(s1 + strlen - i - 1), set) && i < strlen)
		i++;
	return (strlen - i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s;
	int		b;
	int		e;
	char	*t;

	b = begin(s1, set);
	e = end(s1, set, ft_strlen(s1));
	s = s1 && e - b > 0? malloc(e - b + 1) : NULL;
	if (s)
	{
		t = s;
		while (*(s1 + b) && b < e)
			*t++ = *(s1 + b++);
		*t = '\0';
	}
	return (s);
}
