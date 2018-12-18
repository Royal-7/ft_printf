/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 19:32:54 by abao              #+#    #+#             */
/*   Updated: 2018/12/17 19:19:39 by abao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_flags print_char(const char *format, va_list args, t_flags list)
{
	char			a;
	char			*b;
	signed char		c;
	unsigned char	d;
	signed char		*e;

	if (list.flag.minus == 1)
	{
		if (list.flag.
	}
	else
	{
	
	}
	else
		list.correct = 0;
	return (list);
}
