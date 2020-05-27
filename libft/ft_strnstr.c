/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbach <cbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/23 19:07:26 by cbach             #+#    #+#             */
/*   Updated: 2020/05/27 14:14:08 by cbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strnstr(const char *big, const char *little, size_t len)
{
	long unsigned int	l;
	unsigned char		*begin;

	begin = (unsigned char *)big;
	l = ft_strlen(little);
	if (!l)
		return ((char *)big);
	while (*begin && len)
	{
		while (l < len--)
		{
			if (!ft_memcmp(begin, little, l))
				return ((char *)begin);
			begin++;
		}
	}
	return (NULL);
}
