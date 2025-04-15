/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 17:41:30 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/15 17:49:09 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_elem;
	void	*content;

	new_list = NULL;
	while (lst)
	{
		content = f(lst->content);
		new_elem = ft_lstnew(content);
		if (!new_elem)
		{
			del(content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_elem);
		lst = lst->next;
	}
	return (new_list);
}

void *to_upper(void *content)
{
    char *str = (char *)content;
    size_t len = strlen(str);
    char *upper_str = malloc(len + 1);
    if (!upper_str)
        return (NULL);
    for (size_t i = 0; i < len; i++)
        upper_str[i] = toupper((unsigned char)str[i]);
    upper_str[len] = '\0';
    return (upper_str);
}

// Função auxiliar para imprimir os conteúdos de uma lista.
void print_list(t_list *lst)
{
    while (lst)
    {
        printf("%s -> ", (char *)lst->content);
        lst = lst->next;
    }
    printf("NULL\n");
}

int main(void)
{
    t_list *lst_original = NULL;
    t_list *lst_mapeada = NULL;

    // Cria a lista original com alguns nós.
    // Utiliza-se ft_lstnew para criar o nó e ft_lstadd_back para inserir no final.
    ft_lstadd_back(&lst_original, ft_lstnew("test1"));
    ft_lstadd_back(&lst_original, ft_lstnew("hello"));
    ft_lstadd_back(&lst_original, ft_lstnew("world"));

    // Exibe a lista original.
    printf("Lista original:\n");
    print_list(lst_original);

    // Aplica ft_lstmap: cada nó tem seu conteúdo transformado pela função to_upper.
    // Em caso de erro na alocação de algum novo nó, ft_lstmap limpa a nova lista.
    lst_mapeada = ft_lstmap(lst_original, to_upper, free);
    if (!lst_mapeada)
    {
        fprintf(stderr, "Erro ao mapear os nós da lista.\n");
        ft_lstclear(&lst_original, free);
        return (1);
    }

    // Exibe a lista mapeada (com os conteúdos em letras maiúsculas).
    printf("Lista mapeada (conteúdo em maiúsculas):\n");
    print_list(lst_mapeada);

    // Libera a memória alocada para ambas as listas.
    ft_lstclear(&lst_original, free);
    ft_lstclear(&lst_mapeada, free);

    return (0);
}
