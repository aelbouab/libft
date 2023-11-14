/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouab <aelbouab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:37:15 by aelbouab          #+#    #+#             */
/*   Updated: 2023/11/14 12:47:55 by aelbouab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*r;
	size_t			i;

	i = 0;
	r = (unsigned char *)b;
	while (i < len)
	{
		r[i] = (unsigned char)c;
		i++;
	}
	return (r);
}
/*
#include<stdio.h>
int main()
{
	char st[20];
	printf("%s",ft_memset(st,'g',7));
}*/
