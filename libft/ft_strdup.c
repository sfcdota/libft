/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbach <cbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/23 18:55:20 by cbach             #+#    #+#             */
/*   Updated: 2020/05/24 17:45:31 by cbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*t;
	int		l;

	l = ft_strlen(s);
	t = malloc(l + 1);
	return (t ? ft_memmove(t, s, l + 1) : NULL);
}
