/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-feng <oel-feng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 01:12:20 by oel-feng          #+#    #+#             */
/*   Updated: 2023/11/14 23:51:37 by oel-feng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*node;

	new_list = NULL;
	if (!f || !lst || !del)
		return (NULL);
	while (lst != NULL)
	{
		node = ft_lstnew(NULL);
		if (!node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		node->content = f(lst->content);
		ft_lstadd_back(&new_list, node);
		lst = lst->next;
	}
	return (new_list);
}

// void print(void *cont) {
// 	printf("%s->", (char*)cont);
// }
// void del(void *cont) {
// 	free((char *) cont);
// 	cont = NULL;
// }
// void	*f(void *cont)
// {
// 	char 	*tmp;
// 	int		i;
// 	i = 0;
// 	tmp =(char *)cont;
// 	while (tmp[i])
// 	{
// 		tmp[i] = ft_tolower(tmp[i]);
// 		i++;
// 	}
// 	return ((void *)ft_strdup(tmp));
// }
// int main() {
// 	//t_list **list;
// 	t_list *node1 = ft_lstnew(ft_strdup("A"));
// 	t_list *node2 = ft_lstnew(ft_strdup("B"));
// 	t_list *node3 = ft_lstnew(ft_strdup("C"));
// 	t_list *node4 = ft_lstnew(ft_strdup("D"));
// 	t_list *node5 = ft_lstnew(ft_strdup("E"));
// 	t_list *node6 = ft_lstnew(ft_strdup("F"));
// 	ft_lstadd_back(&node1, node2);
// 	ft_lstadd_back(&node1, node3);
// 	ft_lstadd_back(&node1, node4);
// 	ft_lstadd_back(&node1, node5);
// 	ft_lstadd_back(&node1, node6);
// 	t_list *lst;
// 	lst = ft_lstmap(node1, f, del);
// 	ft_lstiter(lst, print);
// 	return 0;
// }