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
#include<stdio.h>

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

void ft_memmove(void *dest, const void *src)//i will use either forward or backward copy based on the case.
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

    length = ft_strlen((char *)src);
    unsigned char *s = (unsigned char *) src;
    unsigned char *d = (unsigned char *) dest;

    if (d < s)
    {
        printf("cc");
    }
    if (d > s && d <= s + length)
    {
        printf("ccc");
    }
    else if (d > s){
        printf("cccc");
    }
    /*
    while(s)
    {
        d = s;
        d++;
        s++;
    }*/
}

int main()
{
    char *str = "mehdiiii";
	char *dest = &str[0] - 1;
	ft_memmove(dest, str);
	return 0;
}