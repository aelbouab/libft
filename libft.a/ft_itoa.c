/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouab <aelbouab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 08:56:08 by aelbouab          #+#    #+#             */
/*   Updated: 2023/11/09 19:14:21 by aelbouab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	size_j(long nb)
{
	int	j;

	j = 1;
	while (nb > 9)
	{
		nb = nb / 10;
		j++;
	}
	return (j);
}

char	*ft_itoa(int n)
{
	char	*r;
	int		j;
	long	nb;

	j = 1;
	nb = n;
	if (n < 0)
	{
		nb = -nb;
		j = 2;
	}
	r = (char *)malloc(sizeof(char) * (j = size_j(nb) + j));
	if (!r)
		return (NULL);
	j--;
	r[j] = '\0';
	while (j >= 0)
	{
		j--;
		r[j] = (nb % 10) + 48;
		nb = nb / 10;
		if (j == 0 && n < 0)
			r[j] = '-';
	}
	return (r);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%s", ft_itoa(1));
}*/