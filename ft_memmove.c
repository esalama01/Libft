/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsalama <elsalama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 20:53:25 by elsalama          #+#    #+#             */
/*   Updated: 2026/10/22 15:21:53 by elsalama         ###   ########.fr       */
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
        1-  if d < s
        2-  if d > s && d < s[n-1]
        3-  if d > s
    */
    /*
    for :
        1 - copy reversely
        2 - move d to a free block of memory.
        3 - khdem 3aadi
    */

    int length;
    int l;
    int i;

    i = 0;
    l = ft_strlen((char *)src);
    length = ft_min(l, n);
    unsigned char *s = (unsigned char *) src;
    unsigned char *d = (unsigned char *) dest;

    if (d < s)
    {
        while(length-- > 0)
        {
            d[length] = s[length];
        }
    }/*
    if (d >= s && d < (s + l))
    {
        while (d < (s + l))
        {
            d++;
        }
    }*/
    while(i < length)
    {
        d[i] = s[i];
        i++;
    }
    return d;
}

#include<stdio.h>
#include<string.h>
int main()
{
    char str[13] = "mehdiiii";
	//ft_memmove(str + 4, str, 4);
    memmove(str + 4, str, 4);
	printf("%s\n", str);
	return 0;
}
