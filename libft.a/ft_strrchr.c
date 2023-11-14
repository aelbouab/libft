/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouab <aelbouab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 11:18:13 by aelbouab          #+#    #+#             */
/*   Updated: 2023/11/14 13:33:35 by aelbouab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*r;

	r = (char *)s;
	i = 0;
	while (s[i])
		i++;
	while (r[i] != (char)c && i > 0)
		i--;
	if (r[i] == (char)c)
		return (&r[i]);
	return (NULL);
}
/*
#include<stdio.h>
int main()
{
	printf("%s",strrchr("adnan",97));
}*/
