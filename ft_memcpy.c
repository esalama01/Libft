/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsalama <elsalama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 13:15:58 by elsalama          #+#    #+#             */
/*   Updated: 2026/10/27 13:25:43 by elsalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stddef.h>
void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;
	unsigned char *ss = (unsigned char*)src;
	unsigned char *dd = (unsigned char*)dest;
	
	i = 0;
	while(ss && i < n)
	{
		dd[i] = ss[i];
		i++;
	}
	return dest;
}
#include <string.h>
#include<stdio.h>
int main()
{
	char str[] = "mehdiiii";
	//char dest[10];
	// memcpy(str, str+1, 4);
	ft_memcpy(str, str+1, 4);

	printf("%s\n",str);
	return 0;
}
