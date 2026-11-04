/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsalama <elsalama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 17:05:26 by elsalama          #+#    #+#             */
/*   Updated: 2026/11/04 14:12:04 by elsalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ss1;
	unsigned char	*ss2;
	int				result;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	result = ft_strncmp(ss1, ss2, n);
	return (result);
}
