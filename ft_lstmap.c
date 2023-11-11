/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ubuntu <ubuntu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 20:42:08 by mel-rhay          #+#    #+#             */
/*   Updated: 2023/11/06 23:22:50 by ubuntu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new;

	new_list = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		new = ft_lstnew((*f)(lst->content));
		if (!new)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new);
		new = new->next;
		lst = lst->next;
	}
	return (new_list);
}
