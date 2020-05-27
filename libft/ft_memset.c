/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbach <cbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 02:06:28 by cbach             #+#    #+#             */
/*   Updated: 2020/05/27 14:52:01 by cbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	cc;
	unsigned char	*t;

	cc = (unsigned char)c;
	t = (unsigned char *)s;
	while (n--)
		*t++ = cc;
	return (s);
}
