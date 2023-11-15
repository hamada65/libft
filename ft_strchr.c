/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-rhay <mel-rhay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 22:09:10 by mel-rhay          #+#    #+#             */
/*   Updated: 2023/11/15 22:09:23 by mel-rhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
		{
			return ((char *)s);
		}
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}

// int main() {
//     const char *str = "teste";
//     int target = '\0'; // The character we want to find

//     // Use strchr to search for 'W' in the string
//     char *result = ft_strrchr(str, target);

//     if (result != NULL) {
//         printf("Character '%c' found at position: %ld\n", target, result
// 	- str);
//     } else {
//         printf("Character '%c' not found in the string.\n", target);
//     }
// return (0);
// }