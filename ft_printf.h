/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 16:22:14 by abao              #+#    #+#             */
/*   Updated: 2018/12/14 19:24:18 by abao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

typedef	struct	s_id
{
	int			zero;
	int			space;
	int			plus;
	int			minus;
}				t_id;

typedef	struct	s_mod
{
	int			h;
	int			h2;
	int			l;
	int			l2;
	int			L;
	int			j;
	int			z;
}				t_mod;

typedef struct	s_flags
{
	t_id		flag;
	char		hashtag;
	int			min;
	char		period;
	int			max;
	t_mod		mod;
	char		arg;
	int			length;
	int			increment;
	int			correct;
}				t_flags;

int				ft_printf(const char *format, ...);
t_flags			read_print(const char *format, va_list args, t_flags list);
t_flags			check(const char *format, int x, va_list args, t_flags list);
t_flags			conversion(const char *format,
		int x, va_list args, t_flags list);
t_flags			field(const char *format, int x, va_list args, t_flags list);
t_flags			precision(const char *format,
		int x, va_list args, t_flags list);
t_flags			argument(const char *format, int x, va_list args, t_flags list);
t_flags			print_arg(const char *format,
		int x, va_list args, t_flags list);
t_flags			print_short(const char *format, va_list args, t_flags list);
t_flags			print_char(const char *format, va_list args, t_flags list);
t_flags			print_long(const char *format, va_list args, t_flags list);
t_flags			print_int(const char *format, va_list args, t_flags list);
t_flags			print_int_other(const char *format, va_list args, t_flags list);
t_flags			print_double(const char *format, va_list args, t_flags list);
t_flags			print_point(const char *format, va_list args, t_flags list);

#endif
