/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsalama <elsalama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 13:11:40 by elsalama          #+#    #+#             */
/*   Updated: 2026/11/02 13:11:45 by elsalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*head;

	head = lst;
	while (head->next != NULL)
	{
		f(head->content);
		head = head->next;
	}
	f(head->content);
}

void lower(void *content)
{
	*(int*)content -= 5;
}
int main(){
    t_list *node1;
    t_list *node2;
    t_list *node3;
    t_list *node4;
    t_list  *head;
    int a  = 1;
    int b = 2;
    int c = 3;
    int d = 4;
    int k = 5;
    t_list *node5 = ft_lstnew(&k);
    node1 = ft_lstnew(&a);
    node2 = ft_lstnew(&b);
    node3 = ft_lstnew(&c);
    node4 = ft_lstnew(&d);
    ft_lstadd_front(&node4, node3);
    ft_lstadd_front(&node3, node2);
    ft_lstadd_front(&node2, node1);
    ft_lstadd_back(&node1, node5);
    head = node1;
    printf("---%d---\n", ft_lstsize(node1));
    while(head->next != NULL)
    {
        printf("%d\n", *(int *)head->content);
        head = head -> next;
    }
    printf("%d\n", *(int *)head->content);
    head = node1;
    ft_lstiter(head, lower);
    while(head->next != NULL)
    {
        printf("%d\n", *(int *)head->content);
        head = head -> next;
    }
    printf("%d\n", *(int *)head->content);
    return (0);
}
