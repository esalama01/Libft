/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memove.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsalama <elsalama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 20:53:25 by elsalama          #+#    #+#             */
/*   Updated: 2026/10/15 18:10:09 by elsalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <stddef.h>

int ft_strlen(char *s)
{
    int l;

    l = 0;
    while(s[l])
        l++;
    return (l);
}

int ft_min(int a, int b)
{
    if (a < b)
        return (a);
    return (b);
}

void *ft_memmove(void *dest, const void *src, size_t n)//i will use either forward or backward copy based on the case.
{
    /*
    I must handle two cases:
        1- [&src[0] > dest[0]] && [&dest[0] + min(n, len(src)) > &src[0]]
        2- &src[0] <= &dest[0] <= src[len(src) - 1]
    */
    /*
    for :
        case 1- backward &dest[0] by a quantity of [&dest[0] + min(n, len(src)) -src[0] + 1])
        case 2- forward (&dest[0]  by a quatity of [src[len(src) - 1] + 1]) 
    */
    int length;

    length = ft_strlen(src);
    ///case 1
    if (((uintptr_t)&src[0] > (uintptr_t)&dest[0]) && ((uintptr_t)&dest[0] + ft_min(n , length) >= (uintptr_t)&src[0]))
    {
        (uintptr_t)&dest[0] -= (uintptr_t)&dest[0] + ft_min(n, length) - (uintptr_t)&src[0]  + 1;
    }
}