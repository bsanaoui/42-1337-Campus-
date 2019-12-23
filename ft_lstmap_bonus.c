/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsanaoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 23:54:54 by bsanaoui          #+#    #+#             */
/*   Updated: 2019/10/20 19:36:22 by bsanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*tmp;

	newlist = malloc(sizeof(t_list));
	tmp = newlist;
	if (!newlist)
		return (NULL);
	while (lst)
	{
		tmp->content = f(lst->content);
		if (!lst->next)
			tmp->next = malloc(sizeof(t_list));
		else 
			tmp->next = NULL;
		if (lst->next && !(tmp->next))
		{
			ft_lstclear(newlist, del);
			break ;
		}
		tmp = tmp->next;
		lst = lst->next;
	}
	return (newlist);
}
