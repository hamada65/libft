/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-rhay <mel-rhay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 23:21:29 by mel-rhay          #+#    #+#             */
/*   Updated: 2023/11/05 03:06:09 by mel-rhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ret;

	ret = NULL;
	while (*s)
	{
		if (*s == (unsigned char)c)
			ret = ((char *)s);
		s++;
	}
	if (*s == (unsigned char)c)
		ret = ((char *)s);
	return (ret);
}

// int main() {
//     const char *str = "Hello, World!";
//     int target = 'e'; // The character we want to find

//     // Use strrchr to search for the last 'o' in the string
//     char *result = ft_strrchr(str, target);

//     if (result != NULL) {
//         printf("Last character '%c' found at position: %ld\n", target, result
// - str);
//     } else {
//         printf("Character '%c' not found in the string.\n", target);
//     }

//     return (0);
// }