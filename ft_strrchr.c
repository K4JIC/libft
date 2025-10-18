/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tozaki <tozaki@student.42.jp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 16:15:32 by tozaki            #+#    #+#             */
/*   Updated: 2025/10/18 20:25:52 by tozaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	slen;
	int		i;

	slen = ft_strlen(s);
	i = 0;
	while (slen - i)
	{
		if (s[slen - i - 1] == (char)c)
			return (&s[slen - i - 1]);
		i++;
	}
	return (NULL);
}

