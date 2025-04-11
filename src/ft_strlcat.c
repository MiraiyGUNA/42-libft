/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 14:18:14 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/09 14:44:31 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

size_t	ft_strlcat(char	*dest, const char *src, size_t size)
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
int main(void)
{
    char dest1[20] = "Hello";
    size_t result1 = ft_strlcat(dest1, " World", 15);
    printf("Teste 1: Resultado: %zu, String: \"%s\"\n", result1, dest1);

    char dest2[10] = "Short";
    size_t result2 = ft_strlcat(dest2, " VeryLongString", 5);
    printf("Teste 2 (Truncado): Resultado: %zu\n", result2);

    char dest3[20] = "";
    size_t result3 = ft_strlcat(dest3, "Test", 10);
    printf("Teste 3 (String vazia): Resultado: %zu, String: \"%s\"\n", result3, dest3);

    char dest4[20] = "Initial";
    size_t result4 = ft_strlcat(dest4, "", 15);
    printf("Teste 4 (String vazia src): Resultado: %zu, String: \"%s\"\n", result4, dest4);

    char dest5[20] = "abc";
    size_t result5 = ft_strlcat(dest5, "def", 0);
    printf("Teste 5 (Size zero): Resultado: %zu\n", result5);

    char dest6[20] = "abcdefghij";
    size_t result6 = ft_strlcat(dest6, "", 20);
    printf("Teste 6 (Size igual ao tamanho da string): Resultado: %zu, String: \"%s\"\n", result6, dest6);

    return 0;
}
*/