/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsalama <elsalama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 17:03:02 by elsalama          #+#    #+#             */
/*   Updated: 2026/11/10 15:02:51 by elsalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free(char **arr, int k)
{
	int	i;

	i = 0;
	while (i < k)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

static int	calc_size(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (str[0] == '\0')
		return (0);
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i])
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (count);
}

static int	allocation_size(char const *str, char c)
{
	int	j;

	j = 0;
	while (str[j] && str[j] != c)
		j++;
	return (j);
}

static char	**fill_array(char **arr, const char *str, char c, int k)
{
	int	j;

	while (*str)
	{
		while (*str == c)
			str++;
		if (!*str)
			break ;
		j = 0;
		arr[k] = malloc(allocation_size(str, c) + 1);
		if (!arr[k])
		{
			ft_free(arr, k);
			return (NULL);
		}
		while (*str && *str != c)
		{
			arr[k][j++] = *str;
			str++;
		}
		arr[k][j] = '\0';
		k++;
	}
	arr[k] = NULL;
	return (arr);
}

char	**ft_split(const char	*str, char c)
{
	int		size;
	char	**arr;

	if (!str)
		return (NULL);
	size = calc_size(str, c);
	arr = malloc((size + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	if (str[0] == '\0')
	{
		arr[0] = NULL;
		return (arr);
	}
	arr = fill_array(arr, str, c, 0);
	if (!arr)
		return (NULL);
	return (arr);
}
