/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsalama <elsalama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 13:15:58 by elsalama          #+#    #+#             */
/*   Updated: 2026/10/14 20:54:50 by elsalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;

	i = 0;
	char *srcc = (char *)src;
	char *destt = (char*)dest;
	while(srcc[i] && i < n)
	{
		destt[i] = srcc[i];
		i++;
	}
	return destt;
}

#include<stdio.h>
int main()
{
	char *str = "mehdiiii";
	char dest[10];
	memcpy(dest, str, 6);
	printf("%s\n", (char *)dest);
	return 0;
}
