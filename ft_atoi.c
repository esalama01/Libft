/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsalama <elsalama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 16:11:46 by elsalama          #+#    #+#             */
/*   Updated: 2026/11/10 12:25:13 by elsalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	check_max(long res, int sign, char c)
{
	if (res + (c - '0') > LONG_MAX / 10)
	{
		if (sign == -1)
		{
			return (0);
		}
		return (-1);
	}
	return (1);
}

static int	ft_is_space(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	result;

	i = 0;
	sign = 1;
	result = 0;
	while (ft_is_space(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (check_max(result, sign, str[i]) != 1)
			return (check_max(result, sign, str[i]));
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result * sign);
}
