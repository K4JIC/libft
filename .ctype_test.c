/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ctype_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tozaki <tozaki@student.42.jp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 17:16:04 by tozaki            #+#    #+#             */
/*   Updated: 2025/10/16 17:24:59 by tozaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include "libft.h"
#include <stdio.h>

void	ctype_test(int c, int (*cpy_func)(int), int (*org_func)(int))
{
	printf("--%c--\n", c);
	printf("copy     : %d\n", cpy_func(c));
	printf("original : %d\n\n", org_func(c));
}

void	isalpha_test(int c)
{
	ctype_test(c, ft_isalpha, isalpha);
}

int	main(void)
{
	char c;

	c = 'a';
	isalpha_test(c);
	isalpha_test(64);
	return (1);
}

