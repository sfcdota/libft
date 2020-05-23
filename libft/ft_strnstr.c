/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbach <cbach@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/23 19:07:26 by cbach             #+#    #+#             */
/*   Updated: 2020/05/23 19:45:54 by cbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strnstr(const char *big, const char *little, size_t len)
{
	long unsigned int l;
	unsigned char *begin;

	begin = (unsigned char *)big;
	l = ft_strlen(little);
	while (*begin && len)
	{
		while (l <= len--)
		{
			if(!ft_memcmp(begin, little, l))
				return ((char *)begin);
			begin++;
		}
	}
	return (NULL);
}
