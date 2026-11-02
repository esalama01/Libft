/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lslast.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsalama <elsalama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 20:26:29 by elsalama          #+#    #+#             */
/*   Updated: 2026/11/01 20:29:43 by elsalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    t_list  *head;

    if (!lst)
        return(NULL);
    head = lst;
    while(head->next != NULL)
    {
        head = head -> next;
    }
    return(head);
}