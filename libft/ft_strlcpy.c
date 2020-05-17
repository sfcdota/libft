/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbach <cbach@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 15:43:19 by cbach             #+#    #+#             */
/*   Updated: 2020/05/17 15:43:19 by cbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t c;

	if (!dst || !src || !size)
		return (0);
	c = 0;
	while (*src && ++c < size)
		*dst++ = *src++;
	while(*src++)
		c++;
	return (--c);
}
