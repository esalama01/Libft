/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strup.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsalama <elsalama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 15:04:15 by elsalama          #+#    #+#             */
/*   Updated: 2026/10/29 15:09:55 by elsalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"libft.h"

char *ft_strdup(const char *s)
{
    size_t  i;
    size_t  l;
    char    *cpy;
    
    if (!s)
    {
        return (NULL);
    }
    l = ft_strlen(s);
    cpy = malloc(l + 1);
    i = 0;
    while(s[i])
    {
        cpy[i] = s[i];
        i++;
    }
    cpy[i] = '\0';
    return (cpy);
}