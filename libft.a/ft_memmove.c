/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouab <aelbouab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:30:08 by aelbouab          #+#    #+#             */
/*   Updated: 2023/11/14 12:21:36 by aelbouab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	if (d == NULL && s == NULL)
		return (NULL);
	if (d > s)
	{
		while (n > i)
		{
			n--;
			d[n] = s[n];
		}
		return (d);
	}
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
/*
#include<stdio.h>
int	main(void)
{
	char c[] = "adnnnnan";
	char d[15];
	printf ("%s", ft_memmove(d, c, 5));
}
*/