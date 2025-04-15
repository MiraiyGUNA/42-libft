/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 17:29:11 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/15 17:31:18 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*temp;

	temp = lst;
	while (temp)
	{
		f(temp->content);
		temp = temp->next;
	}
}

void print_content(void *content)
{
    printf("%s\n", (char *)content);
}

int main(void)
{
    t_list *lista = NULL;

    // Cria os nós e os adiciona ao final da lista.
    // Supõe-se que ft_lstnew cria um nó com o conteúdo passado,
    // e que ft_lstadd_back adiciona o nó no final da lista encadeada.
    ft_lstadd_back(&lista, ft_lstnew("Primeiro Nó"));
    ft_lstadd_back(&lista, ft_lstnew("Segundo Nó"));
    ft_lstadd_back(&lista, ft_lstnew("Terceiro Nó"));

    // Exibe uma mensagem indicando o início da iteração.
    printf("Iterando sobre a lista:\n");

    // Chama ft_lstiter para aplicar a função print_content a cada nó da lista.
    ft_lstiter(lista, print_content);

    return 0;
}
