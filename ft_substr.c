/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsalama <elsalama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 10:42:09 by elsalama          #+#    #+#             */
/*   Updated: 2026/11/04 13:48:44 by elsalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;
	size_t j;
	char *sub;
	if (!s || !len)
	{
		return (NULL);
	}
	if (start > ft_strlen(s))
	{
		return (NULL);
	}
	if (start + len > ft_strlen(s))
	{
		while (start + len > ft_strlen(s))
			len--;
	}
	sub = malloc(len + 1);
	if (!sub)
	{
		return (NULL);
	}
	i = start;
	j = 0;
	while (j < len)
	{
		sub[j] = s[i];
		i++;
		j++;
	}
	sub[j] = '\0';
	return (sub);
}