/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 13:49:02 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/15 14:43:47 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = malloc(sizeof (t_list));
	if (!(list))
		return (NULL);
	list->content = content;
	list->next = NULL;
	return (list);
}

int main(void)
{
    // Conteúdo do nó
    char *mensagem = "Hello, World!";
    
    // Cria um novo nó utilizando ft_lstnew
    t_list *no = ft_lstnew(mensagem);
    if (!no)
    {
        fprintf(stderr, "Falha ao criar o nó.\n");
        return EXIT_FAILURE;
    }
    
    // Exibe o conteúdo armazenado no nó
    printf("Conteúdo do nó: %s\n", (char *)no->content);
    
    // Libera a memória alocada para o nó
    free(no);
    
    return EXIT_SUCCESS;
}
