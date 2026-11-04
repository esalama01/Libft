/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsalama <elsalama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 13:12:20 by elsalama          #+#    #+#             */
/*   Updated: 2026/11/04 13:37:07 by elsalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new_list;
	t_list *head;

	new_list = ft_lstnew(lst->content);
	if (!new_list)
	{
		del(new_list);
		return (NULL);

		head = lst;

		while (head->next != NULL)
		{
			ft_lstadd_back(&new_list, head);
			head = head->next;
		}
		ft_lstadd_back(&new_list, head);
	}
}