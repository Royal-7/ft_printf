/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 19:32:54 by abao              #+#    #+#             */
/*   Updated: 2018/12/18 18:42:17 by abao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
* For char conversions, the flags +, space, and precision don't have any effect.
*/
t_flags print_char(const char *format, va_list args, t_flags list)
{
	int		a;

	if (list.min != 0)
	{
		if (list.flags.minus == 1)
		{
			if (list.zero == 1)
			{
				while (list.min > 1)
				{
					ft_putchar('0');
					list.min--;
				}
			}
			else
			{
				while (list.min > 1)
				{
					ft_putchar(' ');
					list.min--;
				}
			}
		}
		else
		{
			ft_putchar(va_arg(args, char));
			list.length = 1;
		}
	}
	else
	{
		ft_putchar(va_arg(args, char));
		list.length = 1;
	}
	else
		list.correct = 0;
	return (list);
}
