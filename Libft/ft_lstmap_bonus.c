/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivasque <rivasque@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 10:23:28 by rivasque          #+#    #+#             */
/*   Updated: 2023/09/20 11:21:02 by rivasque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*free_memory(void *content, void (*del)(void *))
{
	del(content);
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*first_node;
	void	*temp;

	if (!lst || !f || !del)
		return (NULL);
	temp = f(lst->content);
	new = ft_lstnew(temp);
	if (!new)
		return (free_memory(temp, del));
	lst = lst->next;
	first_node = new;
	while (lst)
	{
		temp = f(lst->content);
		new->next = ft_lstnew(temp);
		if (!(new->next))
		{
			ft_lstclear(&first_node, del);
			return (free_memory(temp, del));
		}
		lst = lst->next;
		new = new->next;
	}
	return (first_node);
}
