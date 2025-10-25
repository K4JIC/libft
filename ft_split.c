/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tozaki <tozaki@student.42.jp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 00:41:30 by tozaki            #+#    #+#             */
/*   Updated: 2025/10/25 16:28:24 by tozaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	ft_countwords(const char *str, char c)
{
	int	flag;
	int	count;
	int	i;

	flag = 1;
	count = 0;
	i = 0;
	while (str[i] == c && str[i])
		i++;
	while (str[i])
	{
		if (str[i] != c && flag)
			count++;
		flag = 0;
		if (str[i] == c)
			flag = 1;
		i++;
	}
	return (count);
}

static char	*ft_get_next_word(char *str[], const char c)
{
	char	*cpy;
	size_t	start;
	size_t	end;
	int		i;

	i = 0;
	while (((*str)[i] == c) && (*str)[i])
		i++;
	start = i;
	while (((*str)[i] != c) && (*str)[i])
		i++;
	end = i;
	cpy = ft_substr(*str, start, end - start);
	if (cpy == NULL)
		return (NULL);
	(*str) = *str + end + 1;
	return (cpy);
}

char	**ft_split(const char *s, char c)
{
	char	**wlist;
	int		number_of_words;
	int		i;
	char	*str;

	str = (char *)s;
	number_of_words = ft_countwords(s, c);
	wlist = (char **)malloc((number_of_words + 1) * sizeof(char *));
	if (!wlist)
		return (NULL);
	i = 0;
	while (i < number_of_words)
	{
		wlist[i] = ft_get_next_word(&str, c);
		i++;
	}
	wlist[i] = NULL;
	return (wlist);
}
/*
#include <stdio.h>

int main(void)
{
 char *str1 = "--anoj--sbai--sdi";
 char charset = '-';
 char **sp;
 int i = 0;

 sp = ft_split(str1, charset);
 while (i < 3)
 {
     printf("%s\n", sp[i]);
     i++;
 }
 return (0);
}  
*/
