/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 16:13:27 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/16 12:01:08 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
int	main(void)
{
	t_list *list = NULL;
	
	// Teste 1: Adicionar a uma lista vazia
	t_list *node1 = ft_lstnew("Primeiro");
	ft_lstadd_back(&list, node1);
	
	// Verificar se o elemento foi adicionado corretamente
	t_list *current = list;
	printf("Lista após adicionar o primeiro elemento:\n");
	while (current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	
	// Teste 2: Adicionar a uma lista com um elemento
	t_list *node2 = ft_lstnew("Segundo");
	ft_lstadd_back(&list, node2);
	
	// Verificar se o elemento foi adicionado no final
	current = list;
	printf("\nLista após adicionar o segundo elemento:\n");
	while (current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	
	// Teste 3: Adicionar mais um elemento
	t_list *node3 = ft_lstnew("Terceiro");
	ft_lstadd_back(&list, node3);
	
	// Verificar novamente
	current = list;
	printf("\nLista após adicionar o terceiro elemento:\n");
	while (current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	
	// Limpar memória
	while (list)
	{
		t_list *temp = list;
		list = list->next;
		free(temp);
	}
	
	return (0);
}
*/
