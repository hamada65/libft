/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-rhay <mel-rhay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 23:45:24 by mel-rhay          #+#    #+#             */
/*   Updated: 2023/11/12 03:49:33 by mel-rhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned long int	i;
	unsigned long int	j;

	i = 0;
	if (ft_strlen(little) == 0)
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && i + j < len)
		{
			if (!(little[j + 1]))
			{
				return ((char *)big + i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}

// int main() {
//     const char *haystack = "lorem ipsum dolor sit amet";
//     const char *needle = "dolor";
//     size_t len = 15;

//     char *result = ft_strnstr(haystack, needle, len);

//     if (result) {
//         printf("Substring found at index %ld\n", result - haystack);
//     } else {
//         printf("Substring not found within the first %zu characters.\n",
// len);
//     }

//     return (0);
// }