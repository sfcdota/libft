/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbach <cbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 15:43:19 by cbach             #+#    #+#             */
/*   Updated: 2020/05/24 17:40:34 by cbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t c;

	c = 0;
	if (size)
	{
		while (*src && c < size - 1)
		{
			*dst++ = *src++;
			c++;
		}
		*dst = '\0';
	}
	while (*src++)
		c++;
	return (c);
}
