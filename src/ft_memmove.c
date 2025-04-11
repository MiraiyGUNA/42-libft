/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 11:46:15 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/11 14:53:42 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*pdest;
	char const	*psrc;

	pdest = dest;
	psrc = src;
	if (pdest == psrc)
		return (pdest);
	if (!dest && !src && n > 0)
		return (NULL);
	i = 0;
	if (dest > src)
	{
		while (n--)
			pdest[n] = psrc[n];
	}
	else
	{
		while (i < n)
		{
			pdest[i] = psrc[i];
			i++;
		}
	}
	return (pdest);
}
/*
int	main(void)
{
	char	src[] = "Aphex Twin";
	char	*result;
	char	dest[50];
	size_t	n;

	n = strlen(src) + 1;
	result = ft_memmove(dest, src, n);
	if (result)
	{
		printf("Fonte: %s\n", src);
		printf("Destino (depois de ft_memmove): %s\n", dest);
	}
	else
	{
		printf("Movimento falhou (resultou em NULL).\n");
	}
	return (0);
}
*/
