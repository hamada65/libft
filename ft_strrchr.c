/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-rhay <mel-rhay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 23:21:29 by mel-rhay          #+#    #+#             */
/*   Updated: 2023/11/15 21:55:00 by mel-rhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ret;

	ret = NULL;
	while (*s)
	{
		if (*s == (char)c)
			ret = ((char *)s);
		s++;
	}
	if (*s == (char)c)
		ret = ((char *)s);
	return (ret);
}

// int main() {
//     const char str[] = {'a','b',-1,'c','\0'} ;
//     int target = -1; // The character we want to find

//     // Use strrchr to search for the last 'o' in the string
//     char *result = strrchr(str, target);

//     // if (result != NULL) {
//         printf("%s\n", result);
//     // } else {
//     //     printf("Character '%c' not found in the string.\n", target);
//     // }

//     return (0);
// }