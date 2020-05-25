/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbach <cbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 02:06:28 by cbach             #+#    #+#             */
/*   Updated: 2020/05/25 19:54:31 by cbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	cc;
	unsigned char	*t;

	if (s)
	{
		cc = (unsigned char)c;
		t = (unsigned char *)s;
		i = 0;
		while (i++ < n && *t)
			*t++ = cc;
	}
	return (s);
}
