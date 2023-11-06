/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-rhay <mel-rhay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 19:18:23 by mel-rhay          #+#    #+#             */
/*   Updated: 2023/11/01 15:40:28 by mel-rhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned long int	i;
	char				*ptr;

	ptr = (char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}

// int main() {
//     char buffer[10];

//     // Initialize the buffer to non-zero values
//     for (int i = 0; i < 10; i++) {
//         buffer[i] = 'A';
//     }

//     // Use bzero to set the buffer to zero
//     bzero(buffer, sizeof(buffer));

//     // Check the contents of the buffer
//     for (int i = 0; i < 10; i++) {
//         printf("%c ", buffer[i]);
//     }

//     return (0);
// }