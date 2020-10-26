/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_digit.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboisnie <tboisnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 17:33:32 by tboisnie          #+#    #+#             */
/*   Updated: 2020/03/01 17:33:45 by tboisnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "char.h"

int	char_is_digit(int c)
{
	return ('0' <= c && c <= '9');
}