/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-rhay <mel-rhay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 12:36:27 by mel-rhay          #+#    #+#             */
/*   Updated: 2023/11/24 21:29:39 by mel-rhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*source;
	char	*destination;

	source = (char *)src;
	destination = (char *)dest;
	if (source == destination)
		return ((void *)destination);
	if (!source && !destination)
		return (NULL);
	if (destination < source || destination > source + n)
	{
		ft_memcpy(destination, source, n);
	}
	else
	{
		while (n-- > 0)
			destination[n] = source[n];
	}
	return ((void *)destination);
}
