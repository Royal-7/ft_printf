/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 17:03:48 by abao              #+#    #+#             */
/*   Updated: 2018/12/18 16:21:24 by abao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_flags		argument(const char *format, int x, va_list args, t_flags list)
{
	x++;
	if (prinf_strchr(&format[x], "hjlzL") != NULL)
	{
		if (format[x] == 'h')
		{
			if (format[x + 1] == 'h')
			{
				list.mod.h2 = 1;
				x++;
			}
			else
				list.mod.h = 1;
		}
		if (format[x] == 'l')
		{
			if (format[x + 1] == 'l')
			{
				list.mod.l2 = 1;
				x++;
			}
			else
				list.mod.l = 1;
		}
		if (format[x] == 'j')
			list.mod.j = 1;
		if (format[x] == 'z')
			list.mod.z = 1;
		if (format[x] == 'L')
			list.mod.L = 1;
		x++;
	}
	if (pf_strchr(&format[x], "diouxXfcsp") != NULL)
	{
		list.arg = format[x];
		list = print_arg(format, x, args, list);
	}
	else
		list.correct = 0;
	return (list);
}

t_flags		print_arg(const char *format, int x, va_list args, t_flags list)
{
	if (list.mod.h == 1)
		list = print_short(format, x, args, list);
	else if (list.mod.h2 == 1 || list.arg == 'c')
		list = print_char(format, x, args, list);
	else if (list.arg == 's')
		list = print_string(format, x, args, list);
	else if (list.mod.l == 1 || list.mod.l2 == 1)
		list = print_long(format, x, args, list);
	else if (pf_strchr(&list.arg, "di") != NULL)
		list = print_int(format, x, args, list);
	else if (pf_strchr(&list.arg, "ouxX") != NULL)
		list = print_int_other(format, x, args, list);
	else if (pf_strchr(&list.arg, "f") != NULL)
		list = print_double(format, x, args, list);
	else if (pf_strchr(&list.arg, "p") != NULL)
		list = print_point(format, x, args, list);
	return (list);
}
