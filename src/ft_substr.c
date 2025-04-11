/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 11:54:46 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/10 13:18:29 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	str_size;

	if (!s)
		return (NULL);
	str_size = ft_strlen(s);
	if (str_size < start)
	{
		dest = (char *)malloc(sizeof(char) * 1);
		if (!dest)
			return (NULL);
		dest[0] = '\0';
		return (dest);
	}
	if (len > str_size - start)
		len = str_size - start;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	ft_memcpy(dest, s + start, len);
	dest[len] = '\0';
	return (dest);
}
/*
int main(void)
{
    // Teste 1: String nula
    char *result1 = ft_substr(NULL, 0, 5);
    if (result1 == NULL)
        printf("Teste 1 (String nula): Passado\n");
    else {
        printf("Teste 1 (String nula): Falhou\n");
        free(result1); // Libera a memória alocada, mesmo que o teste falhe.
    }

    // Teste 2: start maior que o tamanho da string
    char *result2 = ft_substr("banana", 10, 5);
    if (result2 != NULL && result2[0] == '\0') {
        printf("Teste 2 (start > tamanho): Passado\n");
        free(result2);
    } else {
        printf("Teste 2 (start > tamanho): Falhou\n");
        if (result2) free(result2);
    }

    // Teste 3: len maior que o restante da string
    char *result3 = ft_substr("banana", 2, 10);
    if (result3 != NULL && result3[3] == '\0') {
        printf("Teste 3 (len > tamanho restante): Passado\n");
        free(result3);
    } else {
        printf("Teste 3 (len > tamanho restante): Falhou\n");
        if (result3) free(result3);
    }

    // Teste 4: Caso normal
    char *result4 = ft_substr("banana", 2, 3);
    if (result4 != NULL && result4[0] == 'n' && result4[1] == 'a' && result4[2] == '\0') {
        printf("Teste 4 (Caso normal): Passado\n");
        free(result4);
    } else {
        printf("Teste 4 (Caso normal): Falhou\n");
        if (result4) free(result4);
    }

    // Teste 5: start = 0, len = tamanho da string
    char *result5 = ft_substr("banana", 0, 6);
    if (result5 != NULL && result5[0] == 'b' && result5[1] == 'a' && result5[2] == 'n' && result5[3] == 'a' && result5[4] == 'n' && result5[5] == 'a' && result5[6] == '\0') {
        printf("Teste 5 (start = 0, len = tamanho): Passado\n");
        free(result5);
    } else {
        printf("Teste 5 (start = 0, len = tamanho): Falhou\n");
        if (result5) free(result5);
    }

    // Teste 6: start = 0, len = 0
    char *result6 = ft_substr("banana", 0, 0);
    if (result6 != NULL && result6[0] == '\0') {
        printf("Teste 6 (start = 0, len = 0): Passado\n");
        free(result6);
    } else {
        printf("Teste 6 (start = 0, len = 0): Falhou\n");
        if (result6) free(result6);
    }

    return 0;
}
*/