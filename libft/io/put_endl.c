/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_endl.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tboisnie <tboisnie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 18:32:12 by tboisnie          #+#    #+#             */
/*   Updated: 2020/06/01 20:20:39 by tboisnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "io.h"

void	io_put_endl(char *str, int fd)
{
	io_put_str(str, fd);
	io_put_char('\n', fd);
}