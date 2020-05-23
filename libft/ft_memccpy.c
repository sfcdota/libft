/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbach <cbach@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/23 18:11:56 by cbach             #+#    #+#             */
/*   Updated: 2020/05/23 18:24:00 by cbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char *s;
	char *d;

	s = (char *)src;
	d = (char *)dest;
	while (n--)
		if (*s == c)
		{
			ft_memmove(d++, s++, 1);
			return (d);
		}
		else
			ft_memmove(d++, s++, 1);
	return (NULL);
}
