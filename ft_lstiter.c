/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-rhay <mel-rhay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 20:36:31 by mel-rhay          #+#    #+#             */
/*   Updated: 2023/11/06 20:41:24 by mel-rhay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstiter(t_list *lst, void (*f)(void *))
{
    t_list  *tmp;

    if (lst && f)
    {
        tmp = lst;
        while (tmp)
        {
            f(tmp->content);
            tmp = tmp->next;
        }
    }
}