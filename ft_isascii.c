/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbach <cbach@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 12:20:33 by cbach             #+#    #+#             */
/*   Updated: 2020/05/17 12:20:33 by cbach            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		isascii(int c)
{
	return (c > 0 && c < 128? 1 : 0);
}
