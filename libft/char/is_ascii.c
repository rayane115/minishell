/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_ascii.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboisnie <tboisnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 17:32:09 by tboisnie          #+#    #+#             */
/*   Updated: 2020/06/01 20:33:58 by tboisnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "char.h"

int	char_is_ascii(int c)
{
	return (0 <= c && c <= 127);
}
