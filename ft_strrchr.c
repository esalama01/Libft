/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsalama <elsalama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 17:24:09 by elsalama          #+#    #+#             */
/*   Updated: 2026/11/07 15:11:13 by elsalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	int		is_found;

	i = 0;
	is_found = 0;
	while (s[i])
	{
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	while (i-- > 0)
	{
		if (s[i] == (char)c)
		{
			is_found = 1;
			break ;
		}
	}
	if (is_found)
		return ((char *)&s[i]);
	return (NULL);
}
