/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbach <cbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 17:18:38 by cbach             #+#    #+#             */
/*   Updated: 2020/05/24 18:43:15 by cbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *nptr)
{
	long long int	i;
	int				multiplier;

	i = 0;
	multiplier = 1;
	if (nptr != NULL)
	{
		while ((*nptr > 7 && *nptr < 14) || *nptr == 32)
			nptr++;
		if (*nptr == 45 || *nptr == 43)
		{
			if (*nptr == 45)
				multiplier *= -1;
			nptr++;
		}
		while (ft_isdigit(*nptr))
			i = i * 10 + (*nptr++ - 48);
	}
	return (i * multiplier);
}
