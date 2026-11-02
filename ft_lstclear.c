/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsalama <elsalama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 07:33:28 by elsalama          #+#    #+#             */
/*   Updated: 2026/11/02 13:10:51 by elsalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    while ((*lst)->next != NULL)
    {
	printf("ll\n");
	printf("%s\n", (char *)(*lst)->content);
    ft_lstdelone(*lst, del);
	printf("%s\n", (char *)(*lst)->content);
        lst++;
    }
    ft_lstdelone(*lst, del);
    lst = NULL;
}

void    del(void *content)
{
    free(content);
}
int main()
{
    t_list *node1;
    t_list *node2;
    t_list *node3;
    t_list *node4;
    //t_list  *head;
    t_list *node5 = ft_lstnew(ft_strdup("s5"));
    node1 = ft_lstnew(ft_strdup("s1"));
    node2 = ft_lstnew(ft_strdup("s2"));
    node3 = ft_lstnew(ft_strdup("s3"));
    node4 = ft_lstnew(ft_strdup("s4"));
    ft_lstadd_front(&node4, node3);
    ft_lstadd_front(&node3, node2);
    ft_lstadd_front(&node2, node1);
    ft_lstadd_back(&node1, node5);
    //head = node1;
    //printf("---%d---\n", ft_lstsize(node1));
    /*while(head->next != NULL)
    {
        printf("%s\n", (char *)head->content);
        head = head -> next;
    }*/
    //printf("%s\n", (char *)head->content);
    ft_lstclear(&node1, del);
    return (0);
}
