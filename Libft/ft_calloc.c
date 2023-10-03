/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivasque <rivasque@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:57:36 by rivasque          #+#    #+#             */
/*   Updated: 2023/09/21 14:51:39 by rivasque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	void	*memory;

	if (number == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	memory = (void *) malloc(number * size);
	if (!memory)
		return (NULL);
	else
		return (ft_memset(memory, 0, size * number));
}

