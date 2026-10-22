/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsalama <elsalama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 16:32:52 by elsalama          #+#    #+#             */
/*   Updated: 2026/10/22 16:42:29 by elsalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>

void *ft_memchr(const void *s, int c, size_t n)//scans the initial n bytes of the memory area pointed to by s for the first instance of c.
{
	size_t	i;
	unsigned char	*ss;
	if (!s)
		return (NULL);
	i = 0;
	ss = (unsigned char *)s;
	while(ss[i] && i < n)
	{
		if (ss[i] ==  c)
			return (&ss[i]);
		i++;
	}
	return (NULL);
}
