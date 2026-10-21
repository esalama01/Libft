/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsalama <elsalama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 09:19:17 by elsalama          #+#    #+#             */
/*   Updated: 2026/10/21 09:46:53 by elsalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <stddef.h>

int strncmp(const char *s1, const char *s2, size_t n)
{
    int i;

    i = 0;
    if (!s1 || !s2)
        return (NULL);
    while(s1[i] && s2[i] && i < n)
    {
        i++;
    }
    return ((unsigned char)s1[i] -(unsigned char)s2[i]);
}