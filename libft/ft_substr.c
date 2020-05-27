/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbach <cbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/23 21:21:55 by cbach             #+#    #+#             */
/*   Updated: 2020/05/27 23:46:34 by cbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	l;

	if (!s)
		return (NULL);
	l = ft_strlen(s);
	if (start > l)
		return ("");//сделать лучше
	sub = malloc(l - start < len ? l - start + 1 : len + 1);
	if (sub)
		ft_strlcpy(sub, &s[start], len + 1);
	return (sub);
}
