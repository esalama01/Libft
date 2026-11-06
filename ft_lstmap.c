/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsalama <elsalama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 13:12:20 by elsalama          #+#    #+#             */
/*   Updated: 2026/11/06 16:35:32 by elsalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	t_list	*head;
	void	*holder;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	head = lst;
	while (head != NULL)
	{
		holder = f(head->content);
		new_node = ft_lstnew(holder);
		if (!new_node)
		{
			del(holder);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		head = head->next;
	}
	return (new_list);
}
