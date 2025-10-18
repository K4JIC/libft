/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tozaki <tozaki@student.42.jp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 18:05:35 by tozaki            #+#    #+#             */
/*   Updated: 2025/10/17 22:05:17 by tozaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	slen;
	size_t	i;

	slen = ft_strlen((char *)src);
	if ( > size)
		return (slen);
	i = 0;
	while (i < size && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	return (slen);
}

#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	int		n = 20;
	int		size = 4;
	char	dst1[n];
	char	dst2[n];
	char	src[] = "helloworld";
	int		out1;
	int		out2;

	out1 = ft_strlcpy(dst1, src, size); 
	out2 = strlcpy(dst2, src, size); 
	printf("copy     ; %d, %s\n", out1, dst1);
	printf("original ; %d, %s\n", out2, dst2);
	return (1);
}
