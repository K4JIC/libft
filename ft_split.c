/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tozaki <tozaki@student.42.jp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 00:41:30 by tozaki            #+#    #+#             */
/*   Updated: 2025/10/20 01:58:00 by tozaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static char	*ft_strndup(const char *str, size_t size)
{
	char	*cpy;
	size_t	i;

	cpy = (char *)malloc(size * sizeof(char) + 1);
	if (cpy == NULL)
		return (NULL);
	i = 0;
	while (i < size && str[i])
	{
		cpy[i] = str[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

static int	ft_countwords(const char *str, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			count++;
		i++;
	}
	return (count);
}

static char	*ft_get_next_word(char *str[], const char *chrset)
{
	char	*cpy;
	char	*start;
	char	*end:
	int		i;

	i = 0;
	while (((*str)[i] == c) && (*str)[i])
		i++;
	start = &(*str)[i];
	while (((*str)[i] == c) && (*str)[i])
		i++;
	end = &(*str)[i];
	cpy = ft_strndup(*str, end - start);
	if (cpy == NULL)
		return (NULL);
	return (cpy);
}

char	**ft_split(const char *s, char c)
{
	char	**wlist;
	int		count;
	int		i;

	count = ft_countwords(s, c);
	wlist = 
	i = 0;
	while (i < count)





