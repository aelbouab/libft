/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouab <aelbouab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 09:34:54 by aelbouab          #+#    #+#             */
/*   Updated: 2023/11/09 19:05:56 by aelbouab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	g;

	i = 0;
	j = ft_strlen(dst);
	g = j;
	if (!dst && !dstsize)
		return (ft_strlen(src));
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
/*
#include <stdio.h>
int main()
{
	char d[20] = "google";
	printf("%zu",ft_strlcat(d,"adnan",8));
}*/
