/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsalama <elsalama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 12:05:43 by elsalama          #+#    #+#             */
/*   Updated: 2026/11/10 12:50:12 by elsalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_ispresent(char const *set, char c)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static size_t	ft_locate_begg(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (s1[i] && ft_ispresent(set, s1[i]))
	{
		i++;
	}
	return (i);
}

static size_t	ft_locate_end(char const *s1, char const *set)
{
	size_t	i;

	i = ft_strlen(s1) - 1;
	while (i > 0 && ft_ispresent(set, s1[i]))
	{
		i--;
	}
	return (i);
}

static void	ft_fill(char const *s1, char *str, size_t beg, size_t end)
{
	size_t	i;

	i = 0;
	while (beg <= end)
	{
		str[i] = s1[beg];
		i++;
		beg++;
	}
	str[i] = '\0';
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	i = ft_locate_begg(s1, set);
	j = ft_locate_end(s1, set);
	if (s1[i] == '\0')
	{
		str = malloc(1);
		if (!str)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	str = malloc(j - i + 1);
	if (!str)
		return (NULL);
	ft_fill(s1, str, i, j);
	return (str);
}
