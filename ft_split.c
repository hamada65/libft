/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-rhay <mel-rhay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:34:07 by mel-rhay          #+#    #+#             */
/*   Updated: 2023/11/07 00:11:02 by mel-rhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_words_count(const char *str, char sep)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == sep && str[i])
			i++;
		if (str[i] != sep && str[i])
			count++;
		while (str[i] != sep && str[i])
			i++;
	}
	return (count);
}

char	*ft_split_malloc(const char *s, int j)
{
	char	*ptr;

	ptr = (char *)malloc((j + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, s, j);
	return (ptr);
}

void	*ft_free_split(char **str, int i)
{
	while (i-- > 0)
		free(str[i]);
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		words_count;
	char	**str;

	words_count = ft_words_count(s, c);
	str = (char **)malloc((words_count + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	i = 0;
	while (i < words_count)
	{
		while (*s == c && *s)
			s++;
		j = 0;
		while (s[j] != c && s[j])
			j++;
		str[i] = ft_split_malloc(s, j);
		if (!str[i])
			return (ft_free_split(str, i));
		str[i++][j] = '\0';
		s += j;
	}
	str[i] = '\0';
	return (str);
}

// int main()
// {
//     char **ptr;
//     ptr = ft_split("hello world test one", 'e');
//     int i = 0;
//     while (ptr[i])
//     {
//         printf("%s\n", ptr[i]);
//         i++;
//     }

//     return (0);
// }