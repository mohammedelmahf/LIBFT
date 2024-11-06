/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelmahf <maelmahf@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:52:57 by maelmahf          #+#    #+#             */
/*   Updated: 2024/11/06 16:00:04 by maelmahf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*new_list;

	if (lst && f && del)
	{
		new_list = NULL;
		while (lst)
		{
			new = ft_lstnew((*f)(lst->content));
			if (!new)
			{
				ft_lstclear(&new_list, del);
				return (NULL);
			}
			ft_lstadd_back(&new_list, new);
			lst = lst->next;
		}
	}
	else
		return (NULL);
	return (new_list);
}
