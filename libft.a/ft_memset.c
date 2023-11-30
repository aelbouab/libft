/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouab <aelbouab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:37:15 by aelbouab          #+#    #+#             */
/*   Updated: 2023/11/27 13:46:53 by aelbouab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
