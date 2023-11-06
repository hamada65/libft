/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-rhay <mel-rhay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 18:43:31 by mel-rhay          #+#    #+#             */
/*   Updated: 2023/11/05 23:43:28 by mel-rhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*head;

	head = (t_list *)malloc(sizeof(t_list));
	if (!head)
		return (NULL);
	head->content = content;
	head->next = NULL;
	return (head);
}

// int main()
// {
//     int a = 42;
//     t_list *head = NULL;

//     head = (t_list *)malloc(sizeof(t_list));
//     head->content = &a;
//     head->next = NULL;

//     printf("%d\n", *((int *)head->content));
//     return (0);
// }