/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abao <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 15:30:26 by abao              #+#    #+#             */
/*   Updated: 2018/07/20 19:47:24 by abao             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function appends src to the end of dst, 
** then null with some exceptions. dstsize should be large enough for both.
** Param: destination string, string to append, number of chars in dst string.
** Return: Total length of new string
*/

#include "libft.h"
#include <string.h>
#include <stdlib.h>
#include <signal.h>

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	dstNum;
	size_t	srcNum;

	dstNum = 0;
	srcNum = 0;
	if (!src || dstsize <= ft_strlen(dst))
		return (ft_strlen(src) + dstsize);
	dstNum = ft_strlen(dst);
	while (src[srcNum] && srcNum < dstsize - dstNum - 1)
	{
		dst[dstNum + srcNum] = src[srcNum];
		srcNum++;
	}
	dst[dstNum + srcNum] = '\0';
	return (dstNum + ft_strlen(src));
}
