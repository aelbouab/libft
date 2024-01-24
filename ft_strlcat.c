/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouab <aelbouab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 09:34:54 by aelbouab          #+#    #+#             */
/*   Updated: 2023/12/01 15:50:01 by aelbouab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	g;

	i = 0;
	if (!dst && !dstsize)
		return (ft_strlen(src));
	j = ft_strlen(dst);
	g = j;
	if (j >= dstsize)
		return (ft_strlen(src) + dstsize);
	else
	{
		while (src[i] && j < dstsize - 1)
		{
			dst[j] = src[i];
			i++;
			j++;
		}
		dst[j] = 0;
	}
	return (g + ft_strlen(src));
}
