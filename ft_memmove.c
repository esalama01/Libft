/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsalama <elsalama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 20:53:25 by elsalama          #+#    #+#             */
/*   Updated: 2026/11/04 14:12:54 by elsalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_min(int a, int b)
{
	if (a < b)
		return (a);
	return (b);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int				length;
	size_t			l;
	int				i;
	unsigned char	*s;
	unsigned char	*d;

	i = 0;
	l = ft_strlen((char *)src);
	length = ft_min(l, n);
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	if (d < s)
	{
		while (length-- > 0)
		{
			d[length] = s[length];
		}
	}
	while (i < length)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
