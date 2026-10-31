/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsalama <elsalama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 17:03:02 by elsalama          #+#    #+#             */
/*   Updated: 2026/10/31 11:46:24 by elsalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	calculate_size(char const *s, char c)
{
	int	i;
	int	l;
	int	count;

	i = 0;
	count = 0;
	while (s[i] && s[i] == c)
		i++;
	l = ft_strlen(s) - 1;
	while (l > 0 && (s[l] == c))
		l--;
	while (s[i] && i <= l)
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count);
}

void ft_free_kolchi(char	**arr, size_t	limit)
{
	size_t	i;

	i = 0;
	while(i < limit)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

char	*fill_word(char const *s, size_t start_index, size_t end_index)
{
	size_t	i;
	char	*arr;

	i = 0;
	arr = malloc(end_index - start_index + 1);
	if (!arr)
		return (NULL);
	while (start_index <= end_index)
	{
		arr[i] = s[start_index];
		start_index++;
		i++;
	}
	arr[i] = '\0';
	return (arr);
}

void	ft_fill_array(char **arr, char const *s, char c)
{
	size_t	i;
	size_t	l;
	size_t	it;
	size_t	start_index;
	char	*w_arr;

	i = 0;
	it = 0;
	l = ft_strlen(s) - 1;
	while (s[i] && s[i] == c)
		i++;
	while (l > 0 && (s[l] == c))
			l--;
	start_index = i;
	while (s[i] && i <= l)
	{
		while (s[i] == c)
			i++;
		if (s[i - 1] != c && s[i] == c)
		{
			w_arr = fill_word(s, start_index, i - 1);
			if (!w_arr)
			{
				ft_free_kolchi(arr, it);
			}
			arr[it] = w_arr;
			it++;
			start_index = i + 1;
		}
		i++;
	}
	arr[it] = NULL;
}

char	**ft_split(char const *s, char c)
{
	size_t size;
	char **arr;

	if (!s)
		return (NULL);
	size = calculate_size(s, c);
	arr = malloc((size + 1)* sizeof(char *));
	if (!arr)
	{
		ft_free_kolchi(arr, size + 1);
	}
	ft_fill_array(arr, s, c);
	return (arr);
}
int main()
{
	char *s = "mehdimklidjmkl";
	char **arr =ft_split(s, 'm');
	int i = 0;
	while(i < 3)
	{
		printf("%s\n",arr[i]);
		i++;
	}
	ft_free_kolchi(arr, 3);
	return (0);
}