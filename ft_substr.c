/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsalama <elsalama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 10:42:09 by elsalama          #+#    #+#             */
/*   Updated: 2026/10/30 11:39:37 by elsalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t ft_strlen(const char *s)
{
    size_t  i;

    i = 0;
    while(s[i])
        i++;
    return (i);    
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t  i;
    size_t  j;
    char    *sub;
    //printf("%c\n", s[start]);
    if (!s || !len)
    {
        return (NULL);
    }
    if (start > ft_strlen(s))
    {
        return (NULL);
    }
    if (start + len > ft_strlen(s))
    {
        while(start + len > ft_strlen(s))
            len--;
    }
    sub = malloc(len + 1);
    if (!sub)
    {
        return (NULL);
    }
    i = start;
    j = 0;
    while(j < len)
    {
        sub[j] = s[i];
        i++;
        j++;
    }
    sub[j] = '\0';
    return (sub);
}

int main()
{
    char *s = "mehdiepiwjfjfwoaiii";
    char *m = ft_substr(s, 16, 4);
    printf("%s\n%zu\n", m, ft_strlen(s));
    free(m);
    return (0);
}