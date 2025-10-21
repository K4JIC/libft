/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tozaki <tozaki@student.42.jp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 21:49:26 by tozaki            #+#    #+#             */
/*   Updated: 2025/10/17 18:06:25 by tozaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

static size_t	min(int a, int b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstl;
	size_t	i;

	dstl = ft_strlen(dst);
	i = 0;
	while (i + dstl + 1 < size && src[i])
	{
		dst[i + dstl] = src[i];
		i++;
	}
	dst[i + dstl] = '\0';
	return (dstl + min(ft_strlen(src), size));
}
/*
#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	char	dst1[20] = "hello";
	char	dst2[20] = "hello";
	char	src[] = "world";
	int		out1;
	int		out2;

	out1 = ft_strlcat(dst1, src,12);
	out2 = strlcat(dst2, src, 12);
	printf("copy : %d,%s\noriginal : %d,%s\n", out1,dst1, out2,dst2);
}
*/
