/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 14:07:51 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/16 12:07:51 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		size;
	t_list	*temp;

	temp = lst;
	if (!temp)
		return (0);
	size = 0;
	while (temp)
	{
		temp = temp->next;
		size++;
	}
	return (size);
}

/*
int	main(void)
{
	t_list *list = NULL;
	int size;
	
	// Teste com lista vazia
	size = ft_lstsize(list);
	printf("Tamanho da lista vazia: %d\n", size);
	
	// Adicionando um elemento
	t_list *node1 = ft_lstnew("Primeiro");
	ft_lstadd_front(&list, node1);
	size = ft_lstsize(list);
	printf("Tamanho da lista com 1 elemento: %d\n", size);
	
	// Adicionando mais elementos
	t_list *node2 = ft_lstnew("Segundo");
	ft_lstadd_front(&list, node2);
	size = ft_lstsize(list);
	printf("Tamanho da lista com 2 elementos: %d\n", size);
	
	t_list *node3 = ft_lstnew("Terceiro");
	ft_lstadd_front(&list, node3);
	size = ft_lstsize(list);
	printf("Tamanho da lista com 3 elementos: %d\n", size);
	
	// Limpeza da memória
	while (list)
	{
		t_list *temp = list;
		list = list->next;
		free(temp);
	}
	
	return (0);
}
*/
