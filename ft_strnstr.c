/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsalama <elsalama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 14:31:11 by elsalama          #+#    #+#             */
/*   Updated: 2026/10/27 14:41:10 by elsalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t  i;
    size_t  j;

    i = 0;
    if (!little)
        return (big);
    while(big[i])
    {
        j = 0;
        while(big[i + j] == little[j] && j < len)
            j++;
        if (j == ft_strlen(little) || j == len)
            return (&big[i]);
        i++;
    }
    return (NULL);
}
#include<string.h>
#include<stdio.h>
int main()
{
    char *s = "mehdii";
    char *l = "dii";
    printf("%s\n", ft_strnstr(s, l , 5));
    printf("%s\n", strnstr(s, l , 5));
    return 0;
}