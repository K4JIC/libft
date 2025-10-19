/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tozaki <tozaki@student.42.jp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 15:02:26 by tozaki            #+#    #+#             */
/*   Updated: 2025/10/19 15:24:30 by tozaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joineds;
	size_t	s1len;
	size_t	s2len;
	int		i;
	int		j;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	joineds = (char *)malloc(s1len + s2len + 1);
	if (joineds == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		joineds[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		joineds[i + j] = s2[j];
		j++;
	}
	joineds[i + j] = '\0';
	return (joineds);
}

#include <stdio.h>

int	main(void)
{
	char	*js;
	char	s1[] = "hello";
	char	s2[] = "world";

	js = ft_strjoin(s1, s2);
	printf("strjoin : %s\n", js);
	return (1);
}

