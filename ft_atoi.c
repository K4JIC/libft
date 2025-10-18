/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tozaki <tozaki@student.42.jp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 20:57:00 by tozaki            #+#    #+#             */
/*   Updated: 2025/10/19 00:23:16 by tozaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
	 return ((9 <= c && c <= 13) || c == 32);

int	ft_atoi(const char *nptr)
{
	int	res;
	int	sign;
	int	i;

	res = 0;
	i = 0;
	while (ft_isspace(nptr[i]))
		i++;
	while ((9 <= nptr[i] && nptr[i] <= 13) || nptr[i] == 32)
	if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		res = res * 10 + nptr[i] - '0';
		i++;
	}
	return (sign * res);
}


#include <stdio.h>

int	main(int argc,char **argv)
{
	(void)argc;
	printf("%d\n", ft_atoi(argv[1]));
	return (1);
}
