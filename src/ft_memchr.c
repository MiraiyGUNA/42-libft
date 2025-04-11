/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 11:15:44 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/11 14:43:42 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

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
/*
int	main(void)
{
	const char	str[] = "MaxPayne";
	char		c;
	char		*result;

	c = 'a';
	size_t n = 20;
	result = ft_memchr(str, c, n);
	if (result)
	{
		printf("Caractere '%c' encontrado em: %s\n", c, result);
	}
	else
	{
		printf("Caractere '%c' não encontrado nos primeiros %zu bytes.\n", c,
			n);
	}
	return (0);
}
*/
