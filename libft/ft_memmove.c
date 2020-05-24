/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbach <cbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 02:06:26 by cbach             #+#    #+#             */
/*   Updated: 2020/05/24 17:38:35 by cbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	size_t	i;

	i = 0;
	d = (char *)dest;
	s = (char *)src;
	if (dest < src)
		while (i++ < n)
			*(d++) = *(s++);
	else
		while (i++ < n)
			*(d + n - i) = *(s + n - i);
	return (dest);
}
