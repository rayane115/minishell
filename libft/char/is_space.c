/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_space.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboisnie <tboisnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 06:47:02 by tboisnie          #+#    #+#             */
/*   Updated: 2020/03/01 17:29:22 by tboisnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "char.h"

int	char_is_space(int c)
{
	return (c == ' ' || c == '\t' || c == '\r'
		|| c == '\v' || c == '\f' || c == '\n');
}
