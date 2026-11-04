/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsalama <elsalama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 15:24:48 by elsalama          #+#    #+#             */
/*   Updated: 2026/11/04 14:13:51 by elsalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char *ss;
	size_t i;

	ss = s;
	if (!ss || !n)
		return ;
	i = 0;
	while (ss[i] && i < n)
	{
		ss[i] = '\0';
		i++;
	}
}