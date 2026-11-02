/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsalama <elsalama@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 07:09:01 by elsalama          #+#    #+#             */
/*   Updated: 2026/11/02 07:43:58 by elsalama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst -> content);
    free(lst);
}
/*
void    del(void *content)
{
    free(content);
}

int main()
{
    t_list *node1;
    
    node1 = ft_lstnew(ft_strdup("slt"));
    printf("%s\n", (char *)node1->content);
    ft_lstdelone(node1, del);
    //printf("%s\n", (char *)node1->content);
    return (0);
}
*/