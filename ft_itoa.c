/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-rhay <mel-rhay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 12:34:17 by mel-rhay          #+#    #+#             */
/*   Updated: 2023/11/24 12:55:07 by mel-rhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_int_lenght(int c)
{
	int	i;

	i = 0;
	if (c < 0)
		c = -c;
	while (c > 0)
	{
		c /= 10;
		i++;
	}
	return (i);
}

static void	ft_itoa_putnumbers(int i, char *table, int n)
{
	table[i--] = '\0';
	while (i >= 0 && table[i] != '-')
	{
		table[i--] = n % 10 + '0';
		n /= 10;
	}
}

static char	*ft_is_zero(void)
{
	char	*table;

	table = (char *)malloc(2 * sizeof(char));
	if (!table)
		return (NULL);
	table[0] = '0';
	table[1] = '\0';
	return (table);
}

static char	*ft_is_min_int(void)
{
	char	*table;

	table = (char *)malloc(12 * sizeof(char));
	if (!table)
		return (NULL);
	ft_memcpy(table, "-2147483648", 11);
	table[11] = '\0';
	return (table);
}

char	*ft_itoa(int n)
{
	char	*table;
	int		lenght;

	if (n == -2147483648)
		return (ft_is_min_int());
	else if (n == 0)
		return (ft_is_zero());
	else
	{
		lenght = ft_int_lenght(n);
		if (n < 0)
		{
			n = -n;
			table = (char *)malloc(((lenght++) + 2) * sizeof(char));
			if (!table)
				return (NULL);
			table[0] = '-';
		}
		else
			table = (char *)malloc((lenght + 1) * sizeof(char));
		if (!table)
			return (NULL);
		ft_itoa_putnumbers(lenght, table, n);
	}
	return (table);
}
