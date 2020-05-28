/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbach <cbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 14:37:51 by cbach             #+#    #+#             */
/*   Updated: 2020/05/28 21:04:25 by cbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <err.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char *t;

	if (__SIZE_MAX__ / nmemb < size)
		err(-1, "overflow");
	t = malloc(nmemb * size);
	if (t)
		t = ft_memset(t, 0, size * nmemb);
	return (t);
}
