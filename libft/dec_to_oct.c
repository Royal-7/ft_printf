/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dec_to_oct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/15 17:31:50 by abao              #+#    #+#             */
/*   Updated: 2018/12/16 17:16:51 by abao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*dec_to_oct(int n)
{
	char	*get;
	char	*ret;
	int		a;
	int		b;

	get = NULL;
	ret = NULL;
	a = 0;
	b = 0;
	while (n != 0)
	{
		get[a] = n % 8;
		n = n / 8;
		a++;
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
