/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsalama <elsalama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 20:28:42 by elsalama          #+#    #+#             */
/*   Updated: 2026/11/04 14:22:07 by elsalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *head;

	if (!lst || !new)
		return ;
	head = *lst;
	while (head->next != NULL)
	{
		head = head->next;
	}
	ft_lstadd_front(&new, head);
}