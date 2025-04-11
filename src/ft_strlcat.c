/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 14:18:14 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/11 15:10:59 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	size_dest;
	size_t	size_src;
	size_t	i;

	if (!size)
		return (ft_strlen(src));
	i = 0;
	size_dest = ft_strlen(dest);
	size_src = ft_strlen(src);
	if (size == 0 || size_dest > size)
		return (size + size_src);
	if (!*src)
		return (size_dest);
	while (src[i] && (i + size_dest < size - 1))
	{
		dest[size_dest + i] = src[i];
		i++;
	}
	dest[size_dest + i] = '\0';
	return (size_src + size_dest);
}
/*
size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
int	main(void)
{
	const char	src[] = "Zetsubou Sensei";
	size_t		result;
	char		small_dest[28] = "Olá ";
	size_t		small_size;

	char dest[50] = "Sayonara ";
	size_t size = sizeof(dest);
	
	result = ft_strlcat(dest, src, size);
	printf("Destino após ft_strlcat: %s\n", dest);
	printf("Comprimento total esperado: %zu\n", result);
	
	small_size = sizeof(small_dest);
	result = ft_strlcat(small_dest, src, small_size);
	printf("\nDestino com buffer pequeno: %s\n", small_dest);
	printf("Comprimento total esperado com buffer pequeno: %zu\n", result);
	return (0);
}
*/
