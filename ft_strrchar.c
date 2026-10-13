/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsalama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 17:24:09 by elsalama          #+#    #+#             */
/*   Updated: 2026/10/13 17:36:36 by elsalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char *ft_strrchr(const char *s, int c)
{
	size_t	i;
	int		is_found = 0;
	
	i = 0;
	while(s[i])
	{
		i++;
	}
	while(i-->0)
	{
		if (s[i] == c)
		{	
			is_found = 1;
			break;
		}
	}
	if (is_found)
		return ((char *)&s[i]);
	return (NULL);
}
#include<stdio.h>
int main()
{
	const char *str = "mehdi";
	char *strrr = ft_strrchr(str, 'd');
	printf("%s\n",strrr);
	return 0;
}
