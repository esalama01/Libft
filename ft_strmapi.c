/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsalama <elsalama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 12:32:20 by elsalama          #+#    #+#             */
/*   Updated: 2026/10/31 16:26:09 by elsalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
    char    *str;

    str = malloc(ft_strlen(s) + 1);
    if (!str)
    {
        return (NULL);
	}
        i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	return (str);
}

char	f_capitalize(unsigned int i, char c)
{
	(void)i;
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return c;
}
int	main(void)
{
	char *s = "mehdi_midoox";
    printf("%s\n", ft_strmapi(s, f_capitalize));
	return (0);
}