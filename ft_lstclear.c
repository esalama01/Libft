/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsalama <elsalama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 07:33:28 by elsalama          #+#    #+#             */
/*   Updated: 2026/11/04 14:10:56 by elsalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *t_node;
	t_list *n_node;

	while ((*lst) != NULL)
	{
		t_node = *lst;
		n_node = (*lst)->next;
		del(t_node->content);
		free(t_node);
		lst = &n_node;
	}
	lst = NULL;
}