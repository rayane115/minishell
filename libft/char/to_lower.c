/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_lower.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboisnie <tboisnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 17:40:38 by tboisnie          #+#    #+#             */
/*   Updated: 2020/03/01 17:40:55 by tboisnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "char.h"

int	char_to_lower(int c)
{
	if ('A' <= c && c <= 'Z')
	{
		return (c - 'A' + 'a');
	}
	return (c);
}
