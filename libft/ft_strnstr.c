/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbach <cbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/23 19:07:26 by cbach             #+#    #+#             */
/*   Updated: 2020/05/27 00:12:38 by cbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strnstr(const char *big, const char *little, size_t len)
{
	long unsigned int	l;
	unsigned char		*begin;

	begin = (unsigned char *)big;
	l = ft_strlen(little);
	if (len || *little == '\0')
		return(big);
	while (*begin)
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
