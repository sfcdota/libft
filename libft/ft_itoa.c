/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbach <cbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/23 19:57:24 by cbach             #+#    #+#             */
/*   Updated: 2020/05/27 00:17:48 by cbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int		i_length(int n)
{
	int i;

	i = 1;
	while (n / 10)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*a;
	char		*t;
	int			l;
	long int	new_n;

	l = i_length(n) + (n < 0 ? 1 : 0);
	a = malloc(l + 1);
	if (a)
	{
		new_n = n;
		t = a;
		*(t + l) = '\0';
		if(new_n < 0)
		{
			*t++ = '-';
			new_n *= -1;
		}
		while (l--)
		{
			*(t + l) = new_n % 10 + 48;
			new_n /= 10;
		}
	}
	return (a);
}
