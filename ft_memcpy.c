/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-rhay <mel-rhay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 21:25:43 by mel-rhay          #+#    #+#             */
/*   Updated: 2023/11/12 03:49:19 by mel-rhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned long int	i;
	char				*source;
	char				*destination;

	if (!src && !dest)
		return (NULL);
	source = (char *)src;
	destination = (char *)dest;
	i = 0;
	while (i < n)
	{
		destination[i] = source[i];
		i++;
	}
	return (dest);
}

// #include <string.h>

// int main() {
//     char source[] = "Hello, World!";
//     char destination[20]; // Destination buffer

//     // Copy the contents of the source string to the destination buffer
//     size_t length = strlen(source) + 1; // Include the null terminator
//     ft_memcpy(destination, source, 5);

//     // Print the copied string
//     printf("Source: %s\n", source);
//     printf("Destination: %s\n", destination);

//     return (0);
// }