/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbach <cbach@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 02:06:28 by cbach             #+#    #+#             */
/*   Updated: 2020/05/17 02:06:28 by cbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	int i;
	void *temp;

	temp = s;
	i = 0;
	while (i++ < n)
		(unsigned char)*s++ = (unsigned char)c;
	return (temp);
}
