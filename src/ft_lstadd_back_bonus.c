/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 16:13:27 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/22 17:29:56 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!new || !lst)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
}
/*
t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof (t_list));
	if (!(node))
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

int	main(void)
{
	t_list *list = NULL;
	

	t_list *node1 = ft_lstnew("Primeiro");
	ft_lstadd_back(&list, node1);
	

	t_list *current = list;
	printf("Lista após adicionar o primeiro elemento:\n");
	while (current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	

	t_list *node2 = ft_lstnew("Segundo");
	ft_lstadd_back(&list, node2);
	

	current = list;
	printf("\nLista após adicionar o segundo elemento:\n");
	while (current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	

	t_list *node3 = ft_lstnew("Terceiro");
	ft_lstadd_back(&list, node3);
	

	current = list;
	printf("\nLista após adicionar o terceiro elemento:\n");
	while (current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	

	while (list)
	{
		t_list *temp = list;
		list = list->next;
		free(temp);
	}

	return (0);
}
*/
