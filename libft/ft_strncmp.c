/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbach <cbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 12:22:00 by cbach             #+#    #+#             */
/*   Updated: 2020/05/24 17:41:35 by cbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while (i < n && *s1 == *s2)
	{
		i++;
		s1++;
		s2++;
	}
	return (i == n ? 0 : *(unsigned char *)s1 - *(unsigned char *)s2);
}
