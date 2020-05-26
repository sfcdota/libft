/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbach <cbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/23 18:11:56 by cbach             #+#    #+#             */
/*   Updated: 2020/05/27 00:03:14 by cbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char *s;
	unsigned char *d;


		s = (unsigned char *)src;
		d = (unsigned char *)dest;
		while (n--)
			if (*s == c)
			{
				ft_memmove(d++, s++, 1);
				return (d);
			}
			else
				ft_memmove(d++, s++, 1);
	return (dest);
}
