/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-rhay <mel-rhay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 21:34:08 by mel-rhay          #+#    #+#             */
/*   Updated: 2023/11/13 21:08:05 by mel-rhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*source;
	char	*destination;

	source = (char *)src;
	destination = (char *)dest;
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

// int main() {
//     char buffer[] = "Hello, World!";
//     char buffer2[] = "Hello, World!";

//     // Move the 'World!' part to the beginning of the buffer
//     memmove(buffer, buffer + 2, 3);
//     ft_memmove(buffer2, buffer2 + 2, 3);
//     // Print the modified buffer
//     printf("Modified buffer: %s\n", buffer);
//     printf("Modified buffer: %s\n", buffer2);
//     return (0);
// }