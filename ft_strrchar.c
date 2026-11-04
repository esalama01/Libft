/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsalama <elsalama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 17:24:09 by elsalama          #+#    #+#             */
/*   Updated: 2026/11/04 13:47:47 by elsalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t i;
	int is_found = 0;

	i = 0;
	while (s[i])
	{
		i++;
	}
	while (i-- > 0)
	{
		if (s[i] == c)
		{
			is_found = 1;
			break ;
		}
	}
	if (is_found)
		return ((char *)&s[i]);
	return (NULL);
}