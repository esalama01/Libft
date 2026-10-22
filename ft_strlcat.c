/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsalama <elsalama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 16:49:23 by elsalama          #+#    #+#             */
/*   Updated: 2026/10/22 17:02:13 by elsalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)//size means the size of the total string it wants to create
{
	size_t	i;
	size_t	d_len;
	size_t	s_len;

	if (!src || !dst) //for strlcat() both src and dst must be NUL-terminated
		return (NULL);
	i = 0;
	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	if (size <= d_len)
	{
		return (s_len + size);
	}
	while(src[i] && i < size - d_len - 1)
	{
		dst[d_len + i] = src[i];
		i++;
	}
	dst[d_len + i] = '\0';
	return (d_len + s_len);
}
