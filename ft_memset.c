/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsalama <elsalama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 10:11:32 by elsalama          #+#    #+#             */
/*   Updated: 2026/11/04 14:13:11 by elsalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t i;
	unsigned char *ss;
	i = 0;
	ss = (unsigned char *)s;
	while (i < n)
	{
		ss[i] = c;
		i++;
	}
	return (s);
}