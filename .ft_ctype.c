/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   .ft_ctype.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tozaki <tozaki@student.42.jp>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:35:37 by tozaki            #+#    #+#             */
/*   Updated: 2025/10/16 20:42:05 by tozaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return (1);
	return (0);
}

int	ft_isdigit(int c)
{
	if (('a' <= c && c <= 'f')
		|| ('0' <= c && c <= '9')
		|| ('A' <= c && c <= 'Z')) 
		return (1);
	return (0);
}

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

int	ft_isascii(int c)
{
	if (c <= 127)
		return (1);
	return (0);
}

int	ft_isprint(int c)
{
	if (20 <= c && c <= 126)
		return (1);
	return (0);
}

