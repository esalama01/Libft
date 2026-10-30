/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsalama <elsalama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 12:05:43 by elsalama          #+#    #+#             */
/*   Updated: 2026/10/30 12:20:21 by elsalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_locate_begg(char const *s1, char const *set)
{
	size_t	i;

	while (s1[i])
	{
		i = 0;
		while (s1[i] == set[i])
			i++;
        if (set[i] == '\0')
            return (1);
    }
    return (0);
}


char	*ft_strtrim(char const *s1, char const *set)
{
}