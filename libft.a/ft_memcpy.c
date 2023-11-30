/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouab <aelbouab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:26:40 by aelbouab          #+#    #+#             */
/*   Updated: 2023/11/27 13:21:20 by aelbouab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	s = (char *)src;
	d = (char *)dest;
	if (d == s)
		return (dest);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
