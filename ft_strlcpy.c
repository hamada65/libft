/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-rhay <mel-rhay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 22:00:00 by mel-rhay          #+#    #+#             */
/*   Updated: 2023/11/12 03:49:29 by mel-rhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	if (size < 1)
		return (i);
	j = 0;
	while (j < size - 1 && src[j] != '\0')
	{
		dst[j] = src[j];
		j++;
	}
	dst[j] = '\0';
	return (i);
}

// int main() {
//     char dest[20];
//     const char *src = "Hello, World!";

//     // Test case 1: Normal string copy
//     size_t result1 = ft_strlcpy(dest, src, sizeof(dest));
//     printf("Result 1: %s (Length: %zu)\n", dest, result1);

//     // Test case 2: Destination buffer is too small
//     char dest2[5];
//     size_t result2 = ft_strlcpy(dest2, src, sizeof(dest2));
//     printf("Result 2: %s (Length: %zu)\n", dest2, result2);

//     // Test case 3: Null source string
//     char dest3[20];
//     const char *src3 = "";
//     size_t result3 = ft_strlcpy(dest3, src3, sizeof(dest3));
//     printf("Result 3: %s (Length: %zu)\n", dest3, result3);

//     return (0);
// }