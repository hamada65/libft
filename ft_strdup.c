/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-rhay <mel-rhay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 00:35:24 by mel-rhay          #+#    #+#             */
/*   Updated: 2023/11/03 00:14:39 by mel-rhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*tab;
	int		len;
	int		i;

	len = ft_strlen(s);
	tab = (char *)malloc(len + 1 * sizeof(char));
	if (!tab)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		tab[i] = s[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

// int main() {
//     const char *originalString = "Hello, World!";

//     // Duplicate the original string
//     char *duplicateString = ft_strdup(originalString);

//     if (duplicateString != NULL) {
//         printf("Original String: %s\n", originalString);
//         printf("Duplicated String: %s\n", duplicateString);
//     } else {
//         printf("Memory allocation failed.\n");
//     }

//     return (0);
// }