/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 16:13:27 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/15 16:18:29 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

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

int	main(void)
{
	t_list *lista = NULL;
	t_list *node;

	node = ft_lstnew("Nó 1");
	ft_lstadd_back(&lista, node);

	node = ft_lstnew("Nó 2");
	ft_lstadd_back(&lista, node);

	node = ft_lstnew("Nó 3");
	ft_lstadd_back(&lista, node);

	t_list *atual = lista;
	while (atual)
	{
		printf("%s -> ", (char *)atual->content);
		atual = atual->next;
	}
	printf("NULL\n");

	return (0);
}
