/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 14:03:54 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/15 14:43:28 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*
int main(void)
{
	t_list *lista = NULL;
	t_list *node;

	node = ft_lstnew("Nó 3");
	ft_lstadd_front(&lista, node);

	node = ft_lstnew("Nó 2");
	ft_lstadd_front(&lista, node);

	node = ft_lstnew("Nó 1");
	ft_lstadd_front(&lista, node);

	t_list *atual = lista;
	while (atual)
	{
		printf("%s -> ", (char *)atual->content);
		atual = atual->next;
	}
	printf("NULL\n");

	return (0);
}
*/
