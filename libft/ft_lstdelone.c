/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbach <cbach@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/25 22:22:52 by cbach             #+#    #+#             */
/*   Updated: 2020/05/27 14:48:33 by cbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdelone(t_list *lst, void (*del)(void
*))
{
	if (lst)
	{
		if (del)
			del(lst->content);
		free(lst);
	}
}
