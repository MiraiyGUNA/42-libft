/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 11:15:44 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/10 11:20:55 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	const unsigned char	*p;

	p = (const unsigned char *)str;
	while (n != 0)
	{
		if (*p == (unsigned char)c)
		{
			return ((void *)p);
		}
		n--;
		p++;
	}
	return (NULL);
}
