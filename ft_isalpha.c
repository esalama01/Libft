/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsalama <elsalama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 13:39:31 by elsalama          #+#    #+#             */
/*   Updated: 2026/11/04 14:37:24 by elsalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_upper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
int	ft_is_lower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
int	ft_is_alpha(int c)
{
	if (ft_is_upper(c) || ft_is_lower(c))
		return (1);
	return (0);
}