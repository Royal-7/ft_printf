/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dec_to_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 16:22:47 by abao              #+#    #+#             */
/*   Updated: 2018/12/16 16:40:56 by abao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*dec_to_hex(int n)
{
	char	*get;
	char	*ret;
	int		temp;
	int		a;
	int		b;

	get = NULL;
	ret = NULL;
	a = 0;
	b = 0;
	while (n != 0)
	{
		temp = 0;
		temp = n % 16;
		if (temp < 10)
			get[a] = temp + 48;
		else
			get[a] = temp + 55;
		a++;
		n = n / 16;
	}
	a--;
	while (a >= 0)
	{
		ret[b] = get[a];
		a--;
		b++;
	}
	return (ret);
}
