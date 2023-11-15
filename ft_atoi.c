/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-rhay <mel-rhay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 00:04:37 by mel-rhay          #+#    #+#             */
/*   Updated: 2023/11/15 16:32:15 by mel-rhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_atoi_check_llong(long long result, char *str, int sign)
{
	if ((result > LLONG_MAX / 10) || (result == LLONG_MAX / 10 && (*str
				- '0') > LLONG_MAX % 10))
	{
		if (sign == 1)
			return (-1);
		else if (sign == -1)
			return (0);
	}
	return (2);
}

int	ft_atoi(const char *nptr)
{
	char		*str;
	int			sign;
	long long	result;

	str = (char *)nptr;
	result = 0;
	sign = 1;
	while (*str && (*str == ' ' || *str == '\f' || *str == '\n' || *str == '\r'
			|| *str == '\t' || *str == '\v'))
		str++;
	if (*str && (*str == '+' || *str == '-'))
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while (*str && *str >= '0' && *str <= '9')
	{
		if (ft_atoi_check_llong(result, str, sign) != 2)
			return (ft_atoi_check_llong(result, str, sign));
		result = result * 10 + (*str - '0');
		str++;
	}
	return ((int)(result * sign));
}
