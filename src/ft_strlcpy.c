/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 12:28:30 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/10 11:17:41 by vde-maga         ###   ########.fr       */
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
int main(void)
{
    // Teste 1: size é 0
    char dest1[20];
    size_t len1 = ft_strlcpy(dest1, "hello", 0);
    printf("Teste 1 (size = 0): len = %zu, dest = '%s'\n", len1, dest1);

    // Teste 2: size é menor que o tamanho da string src
    char dest2[5];
    size_t len2 = ft_strlcpy(dest2, "hello", 5);
    printf("Teste 2 (size < strlen): len = %zu, dest = '%s'\n", len2, dest2);

    // Teste 3: size é igual ao tamanho da string src
    char dest3[6];
    size_t len3 = ft_strlcpy(dest3, "hello", 6);
    printf("Teste 3 (size == strlen): len = %zu, dest = '%s'\n", len3, dest3);

    // Teste 4: size é maior que o tamanho da string src
    char dest4[10];
    size_t len4 = ft_strlcpy(dest4, "hello", 10);
    printf("Teste 4 (size > strlen): len = %zu, dest = '%s'\n", len4, dest4);

    // Teste 5: src é uma string vazia
    char dest5[20];
    size_t len5 = ft_strlcpy(dest5, "", 10);
    printf("Teste 5 (src vazia): len = %zu, dest = '%s'\n", len5, dest5);

    // Teste 6: Dest é NULL (comportamento indefinido, mas testamos para ver o que acontece)
    // char *dest6 = NULL;
    // size_t len6 = ft_strlcpy(dest6, "hello", 10); // Isso provavelmente vai causar um crash

    return 0;
}
*/