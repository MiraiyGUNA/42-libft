/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 16:23:18 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/15 16:38:54 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	free(lst);
}

int main(void)
{
    // Cria um nó com o conteúdo alocado dinamicamente.
    // Usamos strdup para duplicar a string e garantir que ela esteja em memória dinâmica.
    t_list *node = ft_lstnew(strdup("Elemento para deletar"));
    if (!node)
    {
        fprintf(stderr, "Erro ao criar o nó.\n");
        return 1;
    }
    
    // Exibe o conteúdo do nó antes da deleção.
    printf("Conteúdo do nó antes da deleção: %s\n", (char *)node->content);
    
    // Deleta o nó utilizando ft_lstdelone.
    // A função free é passada como o ponteiro del, que libera o conteúdo alocado.
    ft_lstdelone(node, free);
    
    // ATENÇÃO: Após essa chamada, o nó foi liberado e não é seguro acessá-lo.
    printf("Nó deletado com sucesso.\n");
    
    return 0;
}
