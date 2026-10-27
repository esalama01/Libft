/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsalama <elsalama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 14:31:11 by elsalama          #+#    #+#             */
/*   Updated: 2026/10/27 15:23:51 by elsalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t ft_strlen(const char *s)
{
    size_t l;

    l = 0;
    while(s[l])
        l++;
    return (l);
}

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t  i;
    size_t  j;

    i = 0;
    if (!big && len == 0)
        return (NULL);
    if (!little)
        return ((char *)&big[0]);
    while(big[i] && i < len)
    {
        j = 0;
        while(big[i + j] && big[i + j] == little[j] && i + j < len)
            j++;
        if (little[j] == '\0')
            return ((char*)&big[i]);
        i++;
    }
    return (NULL);
}
#include<bsd/string.h>
#include<stdio.h>
int main()
{
    const char *s = "mehdii";
    const char *l = "dii";
    char *ptr;
    ptr = strnstr(s, l, 7);
    printf("%s\n", ft_strnstr(s, l , 7));
    printf("------------------------------------\n");
    printf("%s\n", ptr);
    return 0;
}