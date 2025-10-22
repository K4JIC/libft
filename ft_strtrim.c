/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tozaki <tozaki@student.42.jp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:49:19 by tozaki            #+#    #+#             */
/*   Updated: 2025/10/22 18:37:45 by tozaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	ft_ischrset(int c, const char *chrset)
{
	int	i;

	i = 0;
	while (chrset[i])
	{
		if (c == chrset[i])
			return (1);
		i++;
	}
	return (0);
}

static char	*ft_strndup(const char *str, size_t size)
{
	char	*cpy;
	size_t	i;

	cpy = (char *)malloc(size * sizeof(char) + 1);
	if (!cpy)
		return (NULL);
	i = 0;
	while (i < size)
	{
		cpy[i] = str[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char		*trimmeds;
	const char	*tstart;
	const char	*tend;
	size_t		i;
	size_t		j;

	i = 0;
	while (ft_ischrset(s1[i], set) && s1[i])
		i++;
	tstart = &s1[i];
	j = ft_strlen(s1);
	while (ft_ischrset(s1[j - 1], set) && j > i)
		j--;
	tend = &s1[j];
	if (tend - tstart <= 0)
	{
		trimmeds = (char *)malloc(1);
		if (!trimmeds)
			return (NULL);
		trimmeds[0] = 0;
		return (trimmeds);
	}
	trimmeds = ft_strndup(tstart, tend - tstart);
	return (trimmeds);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*trimmeds;
	char	set[] = " !";

	trimmeds = ft_strtrim("   hello world!!   !!", set);
	printf("trimmed:%s\n", trimmeds);
	free(trimmeds);
	trimmeds = ft_strtrim("   h!!   !!", set);
	printf("trimmed:%s\n", trimmeds);
	free(trimmeds);
	trimmeds = ft_strtrim("   !!   !!", set);
	printf("trimmed:%s\n", trimmeds);
	free(trimmeds);
	return (0);
}
*/
