/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 11:28:14 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/10 11:44:01 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	size_t	result;
	void	*p;

	result = num * size;
	p = malloc(result);
	if (!p)
	{
		return (NULL);
	}
	ft_memset(p, 0, result);
	return (p);
}
