/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avapaill <avapaill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:49:21 by avapaill          #+#    #+#             */
/*   Updated: 2022/11/11 15:43:26 by avapaill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static void	lstiter(t_list *lst, void *(*f)(void *))
{
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*first_node;
	t_list	*current_node;
	t_list	*previous_node_src;

	if (!lst || !f || !del)
		return ((void *) 0);
	lstiter(lst, f);
	first_node = ft_lstnew(lst->content);
	if (!first_node)
		return ((void *) 0);
	current_node = first_node;
	previous_node_src = lst;
	lst = lst->next;
	ft_lstdelone(previous_node_src, del);
	while (lst)
	{
		current_node->next = ft_lstnew(lst->content);
		if (!current_node)
			return ((void *) 0);
		previous_node_src = lst;
		current_node = current_node->next;
		lst = lst->next;
		ft_lstdelone(previous_node_src, del);
	}
	return (first_node);
}
