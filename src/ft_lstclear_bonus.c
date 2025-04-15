/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 16:40:27 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/15 16:52:17 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	*lst = NULL;
}

int main(void)
{
    t_list *lista = NULL;
    t_list *node;
    t_list *atual;

    // Cria e adiciona o primeiro nó com conteúdo alocado dinamicamente
    node = ft_lstnew(strdup("Nó 1"));
    ft_lstadd_back(&lista, node);

    // Cria e adiciona o segundo nó
    node = ft_lstnew(strdup("Nó 2"));
    ft_lstadd_back(&lista, node);

    // Cria e adiciona o terceiro nó
    node = ft_lstnew(strdup("Nó 3"));
    ft_lstadd_back(&lista, node);

    // Percorre e imprime os conteúdos dos nós
    atual = lista;
    while (atual)
    {
        printf("%s -> ", (char *)atual->content);
        atual = atual->next;
    }
    printf("NULL\n");

    // Limpa a lista, liberando toda a memória alocada para os conteúdos e para os nós
    ft_lstclear(&lista, free);

    // Verifica se a lista foi esvaziada com sucesso
    if (lista == NULL)
        printf("Lista esvaziada com sucesso.\n");

    return 0;
