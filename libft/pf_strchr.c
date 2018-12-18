/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/15 17:28:26 by abao              #+#    #+#             */
/*   Updated: 2018/12/16 16:16:33 by abao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	pf_strchr(char *format, char *search)
{
	int		x;
	int		y;

	x = 0;
	y = 0;
	while (search[x] != '\0')
	{
		while (format[y] != '\0')
		{
			if (search[x] == format[y])
				return (search[x]);
			y++;
		}
		x++;
		y = 0;
	}
	return ('\0');
}
