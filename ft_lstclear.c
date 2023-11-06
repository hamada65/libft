/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-rhay <mel-rhay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:32:15 by mel-rhay          #+#    #+#             */
/*   Updated: 2023/11/06 20:24:10 by mel-rhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list  *tmp;

    if (lst && del)
	{
        while (lst)
        {
            tmp = *lst;
		    del((*lst)->content);
            free(*lst);
            *lst = tmp->next;
        }
	}
}