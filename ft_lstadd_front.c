/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tozaki <tozaki@student.42.jp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 18:52:34 by tozaki            #+#    #+#             */
/*   Updated: 2025/10/20 19:20:44 by tozaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

#include <stdio.h>

int	main(void)
{
	t_list	*primal;
	t_list	*secondaly;

	primal = ft_lstnew("amenbo");
	secondaly = ft_lstnew("akaina");
	ft_lstadd_front(&primal, secondaly);
	printf("%s\n", (char *)primal->content);
	printf("%s\n", (char *)primal->next->content);
	return (0);
}
