/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 17:03:11 by abao              #+#    #+#             */
/*   Updated: 2018/12/13 18:33:25 by abao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_flags		check(const char *format, int x, va_list args, t_flags list)
{
	x++;
	if (format[x] == '%')
	{
		ft_putchar('%');
		list.length++;
		return (list);
	}
	while (printf_strchr(&format[x], "-+0 ") != NULL)
	{
		if (format[x] == '+')
			list.flag.plus = 1;
		if (format[x] == '-')
			list.flag.minus = 1;
		if (format[x] == '0')
			list.flag.zero = 1;
		if (format[x] == ' ')
			list.flag.space = 1;
		x++;
	}
	if (format[x] == '#')
		list = conversion(format, x, args, list);
	else
		list = field(format, x, args, list);
	return (list);
}

t_flags		field(const char *format, int x, va_list args, t_flags list)
{
	char	*str;

	str = "0";
	x++;
	if (printf_strchr(format[x], "1234567890") != NULL)
	{
		str = str + format[x];
		x++;
		while (printf_strchr(format[x], "1234567890") != NULL)
		{
			str = str + format[x];
			x++;
		}
		x--;
		list.max = ft_atoi(str);
	}
	list.increment = ft_atoi(str);
	list = precision(format, x, args, list);
	return (list);
}

t_flags		precision(const char *format, int x, va_list args, t_flags list)
{
	char	*str;

	str = "0";
	x++;
	if (format[x] == '.')
	{
		list.period = '.';
		if (printf_strchr(format[x], "1234567890") != NULL)
		{
			str = str + format[x];
			x++;
			while (printf_strchr(format[x], "1234567890") != NULL)
			{
				str = str + format[x];
				x++;
			}
			x--;
		}
		list.min = ft_atoi(str);
	}
	list = argument(format, x, args, list);
	return (list);
}
