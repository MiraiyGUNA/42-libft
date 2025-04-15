/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 16:03:56 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/15 16:11:50 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

int main(void)
{
    t_list *lista = NULL;
    t_list *node;
    t_list *last;

    // Cria e define o primeiro nó da lista
    node = ft_lstnew("Nó 1");
    lista = node;

    // Cria e adiciona o segundo nó no final da lista
    node = ft_lstnew("Nó 2");
    ft_lstadd_back(&lista, node);

    // Cria e adiciona o terceiro nó no final da lista
    node = ft_lstnew("Nó 3");
    ft_lstadd_back(&lista, node);

    // Obtém o último nó da lista utilizando ft_lstlast
    last = ft_lstlast(lista);
    if (last)
        printf("O conteúdo do último nó é: %s\n", (char *)last->content);
    else
        printf("A lista está vazia.\n");

    return 0;
}
