/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsalama <elsalama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 16:02:06 by elsalama          #+#    #+#             */
/*   Updated: 2026/10/27 16:10:02 by elsalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int ft_strlen(char *s)
{
    int l;

    l = 0;
    while(s[l])
        l++;
    return (l);
}

char *ft_strchr(const char *s, int c)
{
    int i;

    if (!s)
        return (NULL);
    if (c == '\0')
    {
        return(&s[ft_strlen(s)]);
    }
    i = 0;
    while(s[i])
    {
        if (s[i] == c)
            return(&s[i]);
        i++;
    }
    return (NULL);
}