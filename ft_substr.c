/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-rhay <mel-rhay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:59:59 by mel-rhay          #+#    #+#             */
/*   Updated: 2023/11/04 01:56:48 by mel-rhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	unsigned int	lenght;
	char			*str;

	lenght = ft_strlen(s);
	if (len == 0 || start >= lenght)
		return ((char *)ft_calloc(1, sizeof(char)));
	if (start + len > lenght)
		len = lenght - start;
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = (char)s[i + start];
		i++;
	}
	str[i] = '\0';
	return (str);
}

// char    *ft_substr(char const *s, unsigned int start, size_t len)
// {
//     char            *pointer;
//     unsigned int    i;
//     if (len == 0 || start >= (unsigned int)ft_strlen(s))
//         return ((char *)ft_calloc(1, sizeof (char)));
//     if (start + len > ft_strlen(s))
//         len = ft_strlen(s) - start;
//     pointer = (char *)malloc(len + 1);
//     if (pointer == 0)
//         return (0);
//     i = 0;
//     while (i < len)
//     {
//         pointer[i] = (char)s[start + i];
//         i++;
//     }
//     pointer[len] = 0;
//     return (pointer);
// }
// int main()
// {
//     char str[] = "tripouille";
//     printf("str = %s\n", ft_substr(str, 0, 42000));
//     return (0);
// }
// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	size_t	i;
// 	// size_t	lenght;
// 	char	*str;
// 	// lenght = ft_strlen(s);
// 	// if (start + len > lenght)
// 	// 	len = lenght - start;
// 	str = (char *)malloc((len + 1) * sizeof(char *));
// 	if (!str)
// 		return (NULL);
// 	i = 0;
// 	while (i < len)
// 	{
// 		str[i] = s[i + start];
// 		i++;
// 	}
// 	str[i] = '\0';
// 	return (str);
// }