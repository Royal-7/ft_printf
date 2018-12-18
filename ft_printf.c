/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 16:21:57 by abao              #+#    #+#             */
/*   Updated: 2018/12/13 14:17:08 by abao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_flags	read_print(const char *format, va_list args, t_flags list)
{
	int		x;

	x = 0;
	while (format[x] != '\0')
	{
		if (format[x] == '%')
		{
			list = check(format, x, args, list);
			x = x + list.increment;
		}
		else
		{
			ft_putchar(format[x]);
			list.length++;
			x++;
		}
	}
	return (list);
}

int		ft_printf(const char *format, ...)
{
	va_list args;
	t_flags	list;

	list.length = 0;
	list.correct = 1;
	va_start(args, format);
	list = read_print(format, args, list);
	va_end(args);
	return (list.length);
}
