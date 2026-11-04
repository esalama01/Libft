/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsalama <elsalama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 13:15:58 by elsalama          #+#    #+#             */
/*   Updated: 2026/11/04 14:12:14 by elsalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;
	unsigned char *ss = (unsigned char *)src;
	unsigned char *dd = (unsigned char *)dest;

	i = 0;
	while (ss && i < n)
	{
		dd[i] = ss[i];
		i++;
	}
	return (dest);
}