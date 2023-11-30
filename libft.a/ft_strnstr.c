/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouab <aelbouab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:42:42 by aelbouab          #+#    #+#             */
/*   Updated: 2023/11/30 14:26:57 by aelbouab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	j;

	if (!str && n == 0 && to_find)
		return (NULL);
	i = 0;
	if (to_find[i] == '\0')
		return ((char *)str);
	while (str[i] && i < n)
	{
		j = 0;
		while (str[i + j] == to_find[j] && i + j < n)
		{
			if (to_find[j + 1] == '\0')
			{
				return ((char *)&str[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}
