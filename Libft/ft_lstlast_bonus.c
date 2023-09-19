/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivasque <rivasque@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:12:41 by rivasque          #+#    #+#             */
/*   Updated: 2023/09/19 16:16:39 by rivasque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	size_t	i;

	i = 0;
	if (!lst)
		return (NULL);
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (lst);
}
