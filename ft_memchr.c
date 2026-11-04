/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsalama <elsalama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 16:32:52 by elsalama          #+#    #+#             */
/*   Updated: 2026/11/04 14:11:51 by elsalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ss;

	if (!s)
		return (NULL);
	i = 0;
	ss = (unsigned char *)s;
	while (ss[i] && i < n)
	{
		if (ss[i] == c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}
