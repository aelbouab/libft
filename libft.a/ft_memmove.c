/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouab <aelbouab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:30:08 by aelbouab          #+#    #+#             */
/*   Updated: 2023/11/29 11:09:18 by aelbouab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	i = -1;
	s = (char *)src;
	d = (char *)dest;
	if (d == NULL && s == NULL)
		return (NULL);
	if (d == s)
		return (dest);
	if (d > s)
	{
		while (n > 0)
		{
			n--;
			d[n] = s[n];
		}
		return (d);
	}
	while (++i < n)
		d[i] = s[i];
	return (d);
}
