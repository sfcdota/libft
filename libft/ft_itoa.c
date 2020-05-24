/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbach <cbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/23 19:57:24 by cbach             #+#    #+#             */
/*   Updated: 2020/05/24 17:37:01 by cbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int		i_length(int n)
{
	int i;

	i = n < 0 ? 2 : 1;
	while (n / 10)
	{
		i++;
		n /= 10;
	}
	return (i);
}

int		digit(int n)
{
	while (n / 10)
		n /= 10;
	return (n);
}

char	*ft_itoa(int n)
{
	char *a;
	char *t;
	int l;
	long int new_n;

	l = i_length(n);
	a = malloc(l + 1);
	new_n = n;
	if (a)
	{
		t = a;
		if(new_n < 0)
		{
			*t++ = '-';
			new_n *= -1;
		}
		*t = '\0';
		while (l)
		{
			*(t + l--) = new_n % 10 + 48;
			new_n /= 10;
		}
	}
	return (a);
}
