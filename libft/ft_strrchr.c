/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbach <cbach@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 12:22:05 by cbach             #+#    #+#             */
/*   Updated: 2020/05/17 12:22:05 by cbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char *t;

	t = NULL;
	while (*s)
	{
		if (*s == c)
			t = s;
		s++;
	}
	return (c ? (char *)t : (char *)s);
}
