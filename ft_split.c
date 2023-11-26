/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-rhay <mel-rhay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 12:37:30 by mel-rhay          #+#    #+#             */
/*   Updated: 2023/11/24 18:35:07 by mel-rhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_words_count(const char *str, char sep)
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

static char	*ft_split_malloc(const char *s, int j)
{
	char	*ptr;

	ptr = (char *)malloc((j + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ft_memcpy(ptr, s, j);
	ptr[j] = '\0';
	return (ptr);
}

static void	*ft_free_split(char **str, int i)
{
	while (i-- > 0)
		free(str[i]);
	free(str);
	return (NULL);
}

static const char	*skip(const char *s, char c, int flag, int *j)
{
	if (flag)
	{
		while (*s == c && *s)
			s++;
	}
	else if (!flag)
	{
		while (s[*j] != c && s[*j])
			(*j)++;
	}
	return (s);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		words_count;
	char	**str;

	if (!s)
		return (NULL);
	words_count = ft_words_count(s, c);
	str = (char **)malloc((words_count + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	i = 0;
	while (i < words_count)
	{
		s = skip(s, c, 1, &j);
		j = 0;
		s = skip(s, c, 0, &j);
		str[i] = ft_split_malloc(s, j);
		if (!str[i++])
			return (ft_free_split(str, i - 1));
		s += j;
	}
	str[i] = 0;
	return (str);
}
