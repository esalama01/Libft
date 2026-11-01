/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsalama <elsalama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/01 16:06:05 by elsalama          #+#    #+#             */
/*   Updated: 2026/11/01 18:53:52 by elsalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    if (!lst || !new)
        return ;
    new->next = *(lst); 
}
int main()
{
    t_list  *listt;
    t_list  *listt1;
    t_list  *listt2;
    listt = ft_lstnew("mehdi");
    listt1 = ft_lstnew("mehdii");
    listt2 = ft_lstnew("mehdiii");
    ft_lstadd_front(&listt, listt1);
    ft_lstadd_front(&listt1, listt2);
    t_list *head = listt2;
    while (head -> next != NULL)
    {
        printf("%hhn\n", ((unsigned char *)head->content));
        head = head->next;
    }
    return (0);
}