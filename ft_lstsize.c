/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsalama <elsalama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 20:23:11 by elsalama          #+#    #+#             */
/*   Updated: 2026/11/02 06:44:37 by elsalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int ft_lstsize(t_list *lst)
{
    unsigned int    i;
    t_list  *head;

    if (!lst)
        return(0);
    i = 0;
    head = lst;
    while(head->next != NULL)
    {
        i++;
        head = head -> next;
    }
    return(i);
}