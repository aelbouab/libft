/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouab <aelbouab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 10:08:14 by aelbouab          #+#    #+#             */
/*   Updated: 2023/11/09 09:51:51 by aelbouab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*r;

	r = (char *)s;
	i = 0;
	while (r[i] != (char)c && r[i])
		i++;
	if (r[i] == (char)c)
		return (&r[i]);
	return (NULL);
}
/*
#include<stdio.h>

int main()
{
	printf("%s",ft_strchr("adnan",97));
}*/
