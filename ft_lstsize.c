/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tozaki <tozaki@student.42.jp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 18:48:00 by tozaki            #+#    #+#             */
/*   Updated: 2025/10/20 18:52:13 by tozaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*cur;
	int		len;

	cur = lst;
	len = 0;
	while (cur->next != NULL)
	{
		cur = cur->next;
		len++;
	}
	return (len)
}

