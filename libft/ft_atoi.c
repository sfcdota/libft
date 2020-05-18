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
	long long int i;
	int multiplier;

	i = 0;
	if(nptr != NULL)
	{
		multiplier = 1;
		while ((*nptr > 7 && *nptr < 14) || *nptr == 32)
			nptr++;
		if (*nptr++ == 45)
			multiplier *= -1;
		while (ft_isdigit(*nptr))
		{
			i = i * 10 + *nptr++;
		}
	}
	return (i * multiplier);
}
