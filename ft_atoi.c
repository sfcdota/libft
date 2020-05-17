/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbach <cbach@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 12:20:11 by cbach             #+#    #+#             */
/*   Updated: 2020/05/17 12:20:11 by cbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *nptr)
{
	int i;
	char *begin;
	int multiplier;

	if(nptr != NULL)
	{
		multiplier = 1;
		begin = nptr;
		i = 0;
		while (*begin > 7 && *begin < 14 || *begin == 32)
			begin++;
		if (*begin++ = 45)
			multiplier *= -1;
		while (ft_isdigit(*begin))
		{
			i = i * 10 + *begin++;
		}
		return (i * multiplier);
	}
}
