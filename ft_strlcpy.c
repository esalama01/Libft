/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsalama <elsalama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 15:30:13 by elsalama          #+#    #+#             */
/*   Updated: 2026/10/22 16:09:08 by elsalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
//The strlcpy() function copies up to size - 1 characters from the NUL-terminated string src to dst, NUL-terminating the result.
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	l;
	if (!src || size == 0)//for strlcpy() src must be NUL-terminated
		return (NULL);
	l = ft_strlen(src);
	while(i < size && src[i])// in case size > l
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (l);
}
