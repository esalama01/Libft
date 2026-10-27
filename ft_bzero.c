/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsalama <elsalama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 15:24:48 by elsalama          #+#    #+#             */
/*   Updated: 2026/10/27 16:00:12 by elsalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>

void ft_bzero(void *s, size_t n)
{
    unsigned char   *ss = s;
    size_t  i;

    if (!ss || !n)
        return;
    i = 0;
    while(ss[i] && i < n)
    {
        ss[i] = '\0';
        i++;
    }
}
#include<stdio.h>
#include<string.h>

int main()
{
    char *s = "mehdi";
    bzero(s, 5);
    printf("%s\n", s);
    return 0;
}