/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsalama <elsalama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 09:56:57 by elsalama          #+#    #+#             */
/*   Updated: 2026/11/04 13:39:12 by elsalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ss;
	size_t			i;

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

void	*ft_calloc(size_t nmemb, size_t size)
		// allocates mem for an array of nmemb bytes where each has a size bytes
{
	size_t total;
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		ptr = malloc(1);
		return (ptr);
	}
	if (nmemb > SIZE_MAX / size)
	{
		return (NULL);
	}
	total = nmemb * size;
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb);
	return (ptr);
}
