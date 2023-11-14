/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouab <aelbouab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:36:49 by aelbouab          #+#    #+#             */
/*   Updated: 2023/11/14 13:37:11 by aelbouab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	first_i(char const *s1, char const *set)
{
	size_t	i;
	int		j;

	i = 0;
	while (i < ft_strlen(s1))
	{
		j = 0;
		while (set[j])
		{
			if (set[j] == s1[i])
				break ;
			j++;
		}
		if (set[j] == '\0' && set[j - 1] != s1[i])
			break ;
		i++;
	}
	return (i);
}

int	last_i(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	l;

	i = 0;
	l = ft_strlen(s1);
	l--;
	while (l >= i)
	{
		j = 0;
		while (set[j])
		{
			if (set[j] == s1[l])
				break ;
			j++;
		}
		if (set[j] == '\0' && set[j - 1] != s1[l])
			break ;
		l--;
	}
	return (l);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		e;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	if (set[0] == '\0')
		return (ft_strdup(s1));
	i = first_i(s1, set);
	if (s1[0] == '\0' || (size_t)i == ft_strlen(s1))
		return (ft_strdup(""));
	j = last_i(s1, set);
	e = 0;
	str = (char *)malloc(sizeof(char) * (j - i + 2));
	if (!str)
		return (NULL);
	while (i <= j)
	{
		str[e] = s1[i];
		e++;
		i++;
	}
	str[e] = '\0';
	return (str);
}
/*
#include <stdio.h>

int main()
{
	printf("%s", ft_strtrim("abceadnanabc", "abc"));
}*/