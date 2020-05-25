/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbach <cbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/25 21:31:27 by cbach             #+#    #+#             */
/*   Updated: 2020/05/26 00:25:02 by cbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list				*ft_lstnew(void *content)
{
	t_list *t;

	t = malloc(sizeof(t_list));
	if (t)
	{
		t->content = content;
		t->next = NULL;
	}
	return (t);
}
