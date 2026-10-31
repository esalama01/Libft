/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsalama <elsalama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 11:50:28 by elsalama          #+#    #+#             */
/*   Updated: 2026/10/31 12:30:53 by elsalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	calc_size(long n)
{
	int	size;

	size = 0;
	if (n < 0)
	{
		size++;
		n *= -1;
	}
	while (n > 0)
	{
		size++;
		n /= 10;
	}
	return (size);
}

char	*ft_itoa(int nb)
{
    long n;
	int		size;
	int		l;
	char	*str;

    n = nb;
	size = calc_size(n);
	str = malloc(size + 1);
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	l = size;
	while (l-- > 0 && n > 0)
	{
		str[l] = (n % 10) + '0';
		n /= 10;
	}
	str[size] = '\0';
	return (str);
}

int	main(void)
{
	int l = calc_size(-2147483648);
	printf("%d\n%s\n", l, ft_itoa(-2147483648));
	return (0);
}