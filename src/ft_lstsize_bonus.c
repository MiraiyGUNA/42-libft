/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 14:07:51 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/15 15:59:32 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

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

int main(void)
{
    t_list *lista = NULL;
    
    // Verifica o tamanho da lista vazia.
    printf("Tamanho da lista vazia: %d\n", ft_lstsize(lista));
    
    // Adiciona nós à lista.
    ft_lstadd_back(&lista, ft_lstnew("Primeiro Nó"));
    ft_lstadd_back(&lista, ft_lstnew("Segundo Nó"));
    ft_lstadd_back(&lista, ft_lstnew("Terceiro Nó"));
    
    // Exibe o tamanho da lista após a inserção de nós.
    printf("Tamanho da lista após inserções: %d\n", ft_lstsize(lista));
    
    // Percorre a lista e exibe o conteúdo de cada nó.
    t_list *atual = lista;
    while (atual)
    {
        printf("Conteúdo: %s\n", (char *)atual->content);
        atual = atual->next;
    }
    
    // Limpa a lista e libera a memória alocada para os nós.
    ft_lstclear(&lista, free);
    
    return 0;
}
