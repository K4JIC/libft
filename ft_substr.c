/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tozaki <tozaki@student.42.jp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 14:46:16 by tozaki            #+#    #+#             */
/*   Updated: 2025/10/19 15:45:07 by tozaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	slen;
	size_t	i;

	slen = ft_strlen(s);
	if (start > slen)
		return (NULL);
	sub = (char *)malloc(len * sizeof(char) + 1);
	if (sub == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
/*
#include <stdio.h>

int	main(void)
{
	char			s[] = "helloworld";
	unsigned int	start = 3;
	size_t 			len = 4;
	char			*sub;

	sub = ft_substr(s, start, len);
	printf("substr : %s\n", sub);
	free(sub);
	return (1);
}
*/
