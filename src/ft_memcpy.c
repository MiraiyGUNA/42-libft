/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 15:17:32 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/11 14:49:07 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*pdest;
	const char	*psrc;

	pdest = dest;
	psrc = src;
	if (pdest == psrc)
	{
		return (pdest);
	}
	if (!dest && !src && n > 0)
	{
		return (NULL);
	}
	i = 0;
	while (i < n)
	{
		pdest[i] = psrc[i];
		i++;
	}
	return (pdest);
}
/*
int	main(void)
{
	char	src[] = "GTA San Andreas";
	char	*result;
	char	dest[50];
	size_t	n;

	n = strlen(src) + 1;
	result = ft_memcpy(dest, src, n);
	if (result)
	{
		printf("Fonte: %s\n", src);
		printf("Destino (depois de ft_memcpy): %s\n", dest);
	}
	else
	{
		printf("Cópia falhou (resultou em NULL).\n");
	}
	return (0);
}
*/
