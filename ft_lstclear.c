/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsalama <elsalama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 07:33:28 by elsalama          #+#    #+#             */
/*   Updated: 2026/11/06 15:21:48 by elsalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*memory_node;
	t_list	*iterator_node;

	if (!lst)
		return ;
	iterator_node = *lst;
	while (iterator_node->next != NULL)
	{
		memory_node = iterator_node;
		del(iterator_node->content);
		iterator_node = memory_node->next;
		free(memory_node);
	}
	*lst = NULL;
}
