/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsalama <elsalama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 12:05:43 by elsalama          #+#    #+#             */
/*   Updated: 2026/10/30 17:02:14 by elsalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_ispresent(char const *set, char c)
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

size_t	ft_locate_begg(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (s1[i] && ft_ispresent(set, s1[i]))
	{
		i++;
	}
	return (i);
}

size_t	ft_locate_end(char const *s1, char const *set)
{
	size_t	i;

	i = ft_strlen(s1) - 1;
	while (i > 0 && ft_ispresent(set, s1[i]))
	{
		i--;
	}
	return (i);
}


void	ft_fill(char const *s1, char *str, size_t beg, size_t end)
{
	size_t	i;

	i = 0;
	while (beg <= end) // could be <= m not sure
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

	if (!s1 || !set || ft_strlen(set) > ft_strlen(s1))
		return (NULL);
	i = ft_locate_begg(s1, set);
	j = ft_locate_end(s1, set);
	str = malloc(j - i + 1);
	if (!str)
		return (NULL);
	ft_fill(s1, str, i, j);
	return (str);
}

int	main(void)
{
	char *ss = "holamehdiholah";
	char *end = ft_strtrim(ss, "ha");
	printf("%s\n", end);
	free(end);
	return (0);
}