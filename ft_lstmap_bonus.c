/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbouab <aelbouab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 15:20:28 by aelbouab          #+#    #+#             */
/*   Updated: 2023/12/01 15:26:21 by aelbouab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*p;
	t_list	*k;
	char	*r;

	if (!lst || !f || !del)
		return (NULL);
	p = NULL;
	while (lst)
	{
		r = f(lst->content);
		k = ft_lstnew(r);
		if (!k)
		{
			free (r);
			ft_lstclear(&p, del);
			return (NULL);
		}
		ft_lstadd_back(&p, k);
		lst = lst->next;
	}
	return (p);
}
