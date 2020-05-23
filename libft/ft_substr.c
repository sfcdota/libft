/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbach <cbach@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/23 21:21:55 by cbach             #+#    #+#             */
/*   Updated: 2020/05/23 21:27:35 by cbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start,size_t len)
{
	char *sub;

	sub = malloc(len + 1);
	if (sub)
	{
		ft_strlcpy(sub, &s[start], len + 1);
	}
	return (sub);
}
