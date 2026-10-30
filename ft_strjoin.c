/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsalama <elsalama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 11:43:06 by elsalama          #+#    #+#             */
/*   Updated: 2026/10/30 12:04:17 by elsalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
    size_t  i;
    size_t  j;
    char    *final;
    
	if (!s1 || !s2)
		return (NULL);
	final = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
    if (!final)
        return (NULL);
    i = 0;
    j = 0;
    while (s1[i])
    {
        final[j] = s1[i];
        i++;
        j++;
    }
    i = 0;
    while(s2[i])
    {
        final[j] = s2[i];
        i++;
        j++;
    }
    final[j] = '\0';
    return (final);
}
int main()
{
    char *s1 = "mehdiepiwjfjfwoaiii";
    char *s = "lhdiepiwjfjfwoaiii";
    char *m = ft_strjoin(s1,s);
    printf("%s\n", m);
    free(m);
    return (0);
}