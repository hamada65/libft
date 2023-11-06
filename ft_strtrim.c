/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-rhay <mel-rhay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:47:49 by mel-rhay          #+#    #+#             */
/*   Updated: 2023/11/04 00:32:43 by mel-rhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_set(const char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	sindex;
	size_t	eindex;
	size_t	j;
	char	*str;

	sindex = 0;
	while (s1[sindex] && is_set(s1[sindex], set))
	{
		sindex++;
	}
	eindex = ft_strlen(s1);
	while (sindex < eindex && is_set(s1[eindex - 1], set))
	{
		eindex--;
	}
	str = (char *)malloc((eindex - sindex + 1) * sizeof(char));
	if (!str)
		return (NULL);
	j = 0;
	while (sindex < eindex)
	{
		str[j++] = s1[sindex++];
	}
	str[j] = '\0';
	return (str);
}

// int main()
// {
// printf("str = %s\n", ft_strtrim("lorem \n ipsum \t dolor \n sit \t amet",
// " "));
// return(0);
// }