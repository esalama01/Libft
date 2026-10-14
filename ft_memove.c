/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memove.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsalama <elsalama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 20:53:25 by elsalama          #+#    #+#             */
/*   Updated: 2026/10/14 21:39:13 by elsalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stddef.h>

int ft_strlen(char *s)
{
    int l;

    l = 0;
    while(s[l])
        l++;
    return (l);
}

void *ft_memmove(void *dest, const void *src, size_t n)//i will use either forward or backward copy based on the case.
{
    /*
    I must handle so many cases:
        1- if &src[0] < &dest[0] i will use forward cpy. But take care of the case if the diff between them is less than len(src).
        2- if $src[0] > &dest[0] i will use backward cpu. But take care of the case where the diff between them is less than len(src).
        3- If they're equal. i think i can t write data to it in that case. 
    */
    int length;

    length = ft_strlen(src);

}