/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbach <cbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 14:37:51 by cbach             #+#    #+#             */
/*   Updated: 2020/05/27 14:47:55 by cbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char *t;

	t = malloc(nmemb * size);
	if (t)
		t = ft_memset(t, 0, size * nmemb);
	return (t);
}
