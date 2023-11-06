/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-rhay <mel-rhay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 00:44:37 by mel-rhay          #+#    #+#             */
/*   Updated: 2023/11/06 00:39:55 by mel-rhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	totalsize;
	void	*ptr;

	if (size && (SIZE_MAX / size <= nmemb))
		return (NULL);
	totalsize = nmemb * size;
	ptr = (void *)malloc(totalsize);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, totalsize);
	return (ptr);
}

// int main()
// {
// 	char *str;

// 	str = ft_calloc(0xfff, 0xfffffffffffffff);
// 	printf("%p", str);
// 	return (0);
// }