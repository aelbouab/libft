/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouab <aelbouab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:59:23 by aelbouab          #+#    #+#             */
/*   Updated: 2023/11/21 16:25:30 by aelbouab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nede;

	nede = malloc(sizeof(t_list));
	if (!nede)
		return (NULL);
	nede->content = content;
	nede->next = NULL;
	return (nede);
}
