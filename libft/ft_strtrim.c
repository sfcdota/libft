/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbach <cbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/23 22:29:54 by cbach             #+#    #+#             */
/*   Updated: 2020/05/27 14:52:16 by cbach            ###   ########.fr       */
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

static char		*begin(char const *s1, char const *set)
{
	while (is_in_set(*s1, set))
		s1++;
	return ((char *)s1);
}

static char		*end(char const *s1, char const *set)
{
	char *temp;

	temp = (char *)s1;
	while (*s1)
	{
		if (!is_in_set(*s1, set))
			temp = (char *)s1;
		s1++;
	}
	return (temp);
}

static int		length(char const *b, char const *e)
{
	int i;

	i = 1;
	while (b++ != e)
		i++;
	return (i);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	char	*b;
	char	*e;
	char	*t;
	int		l;

	if (!s1)
		return (NULL);
	b = begin(s1, set);
	e = end(b, set);
	l = length(b, e);
	t = malloc(l + 1);
	ft_strlcpy(t, b, l + 1);
	return (t);
}
