/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-rhay <mel-rhay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 21:50:24 by mel-rhay          #+#    #+#             */
/*   Updated: 2023/11/06 23:32:39 by mel-rhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest_len;
	size_t	src_len;

	dest_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (size <= dest_len)
	{
		return (size + src_len);
	}
	i = dest_len;
	j = 0;
	while (src[j] != '\0' && i < size - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dest_len + src_len);
}

// int main() {
//     char dest[20] = "Hello, ";
//     const char *src = "World!";
//     size_t size = sizeof(dest);

//     // Test case 1: Normal Concatenation
//     size_t result1 = ft_strlcat(dest, src, size);
//     printf("Result 1: %s (Length: %zu)\n", dest, result1);

//     // Test case 2: Destination buffer is too small
//     char dest2[10] = "Hello, ";
//     size_t result2 = ft_strlcat(dest2, src, sizeof(dest2));
//     printf("Result 2: %s (Length: %zu)\n", dest2, result2);

//     // Test case 3: Null source string
//     char dest3[20] = "Hello, ";
//     const char *src3 = "";
//     size_t result3 = ft_strlcat(dest3, src3, sizeof(dest3));
//     printf("Result 3: %s (Length: %zu)\n", dest3, result3);

//     return (0);
// }