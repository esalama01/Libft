/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsalama <elsalama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 10:11:32 by elsalama          #+#    #+#             */
/*   Updated: 2026/10/27 13:10:01 by elsalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include<stdio.h>
#include <string.h>

void    *ft_memset(void *s, int c, size_t n)
{
    size_t  i;
    unsigned char   *ss;
    //unsigned char   *cc;

    //cc = (unsigned char*)&c;
    i = 0;
    ss = (unsigned char*)s;
    /*
    while(ss[i])
    {
        //printf("%d\n", ss[i]);
        i++;
    printf("%ld\n", i);
    i = 0;
    }*/
    while(i < n)//did not add && ss bec the original func seg faults
    {
        ss[i] = c;
        i++;
    }
    return (s);
}

int main()
{
    int  *s = NULL;
    ft_memset(s, 6, 1);
    //ft_memset(&s, 13, 1);
    //printf("%d\n", s);
    //int *ss = NULL;
    //memset(ss, 6, 1);
    //ft_memset(&s, 13, 1);
    //printf("%d\n", ss);
    return 0;
}