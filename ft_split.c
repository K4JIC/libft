/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tozaki <tozaki@student.42.jp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 00:41:30 by tozaki            #+#    #+#             */
/*   Updated: 2025/10/22 18:34:55 by tozaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static char	*ft_strndup(const char *str, size_t size)
{
	char	*cpy;
	size_t	i;

	cpy = (char *)malloc(size * sizeof(char) + 1);
	if (!cpy)
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
	char	*start;
	char	*end;
	int		i;

	i = 0;
	while (((*str)[i] == c) && (*str)[i])
		i++;
	start = &(*str)[i];
	while (((*str)[i] != c) && (*str)[i])
		i++;
	end = &(*str)[i];
	cpy = ft_strndup(start, end - start);
	if (cpy == NULL)
		return (NULL);
	(*str) = end + 1;
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
