/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-rhay <mel-rhay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:26:00 by mel-rhay          #+#    #+#             */
/*   Updated: 2023/11/03 22:45:27 by mel-rhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		l1;
	int		l2;
	char	*str;

	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	str = (char *)malloc((l1 + l2 + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_memcpy(str, s1, l1);
	ft_memcpy((str + l1), s2, l2);
	str[l1 + l2] = '\0';
	return (str);
}

// int main()
// {
//     char str1[] = "Hello, ";
//     char str2[] = "World!";

//     printf("str = %s\n", ft_strjoin(str1, str2));
//     return (0);
// }