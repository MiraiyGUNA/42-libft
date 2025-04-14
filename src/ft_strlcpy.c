/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 12:28:30 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/14 15:11:29 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	length;

	i = 0;
	length = 0;
	while (src[length] != '\0')
		length++;
	if (!size)
		return (length);
	while (i < size - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	if (size > i)
		dest[i] = 0;
	return (length);
}
/*
int	main(void)
{
	const char	src[] = "High And Low";
	size_t		result;
	char		small_dest[5];
	size_t		small_size;

	char dest[20];
	size_t size = sizeof(dest); 

	result = ft_strlcpy(dest, src, size);
	printf("Fonte: %s\n", src);
	printf("Destino (após ft_strlcpy): %s\n", dest);
	printf("Comprimento da fonte: %zu\n", result);

	small_size = sizeof(small_dest);
	result = ft_strlcpy(small_dest, src, small_size);
	printf("\nDestino com buffer pequeno: %s\n", small_dest);
	printf("Comprimento total esperado: %zu\n", result);
	return (0);
}
*/
