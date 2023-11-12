/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-rhay <mel-rhay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:47:54 by mel-rhay          #+#    #+#             */
/*   Updated: 2023/11/12 03:49:20 by mel-rhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	long unsigned int	i;
	char				*ptr;

	ptr = (char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (s);
}

// #include <string.h>
// #include <stdio.h>
// int main() {
//     int	*ptr;
// 	ptr = malloc(10 * sizeof(int));
// 	ft_memset(ptr, 42, 15);
// 	int i = 0;
// 	while (i < 15)
// 	{
// 		printf("%i\n", ptr[i]);
// 		i++;
// 	}
//     return (0);
// }