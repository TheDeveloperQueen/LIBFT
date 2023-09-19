/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivasque <rivasque@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 11:12:33 by rivasque          #+#    #+#             */
/*   Updated: 2023/09/19 10:59:15 by rivasque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*fill_str(char const *s1, char const *set, size_t *op)
{
	char	*trim;

	while (s1[op[0]] && ft_strchr(set, s1[op[0]]))
			op[0]++;
	while (s1[op[1] - 1] && ft_strchr(set, s1[op[1] - 1]) && op[0] < op[1])
		op[1]--;
	op[2] = op[1] - op[0] + 1;
	trim = (char *) malloc(op[2] * sizeof(char));
	if (!trim)
		return (NULL);
	ft_strlcpy(trim, (char *)&s1[op[0]], op[2]);
	return (trim);
}

/*
* i = op[0]
* end = op[1]
* len = op[2]
*/

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	op[3];
	char	*trim;

	op [0] = 0;
	op [1] = ft_strlen(s1);
	trim = NULL;
	if (!s1[0] || !set[0])
	{
		trim = ft_strdup("");
		if (!trim)
			return (NULL);
	}
	if (s1[op[0]] != '\0' && set != '\0')
	{
		free(trim);
		trim = fill_str(s1, set, op);
	}
	return (trim);
}
