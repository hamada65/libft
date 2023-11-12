/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-rhay <mel-rhay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 23:16:45 by mel-rhay          #+#    #+#             */
/*   Updated: 2023/11/12 03:49:22 by mel-rhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long long int	nbr;

	if (fd)
	{
		nbr = n;
		if (nbr < 0)
		{
			ft_putchar_fd('-', fd);
			nbr = -nbr;
		}
		if (nbr >= 10)
		{
			ft_putnbr_fd((nbr / 10), fd);
			ft_putchar_fd((nbr % 10) + '0', fd);
		}
		else
			ft_putchar_fd(nbr + '0', fd);
	}
}
