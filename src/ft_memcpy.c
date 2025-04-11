/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 15:17:32 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/09 11:43:48 by vde-maga         ###   ########.fr       */
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
int main(void) {
    // Teste 1: Copiar uma string simples
    char src1[] = "hello";
    char dest1[6];
    void *result1 = ft_memcpy(dest1, src1, 5);
    if (memcmp(dest1, "hello", 5) == 0) {
        printf("Teste 1 (String simples): Passado\n");
    } else {
        printf("Teste 1 (String simples): Falhou. Esperado: hello, Obtido: %s\n", dest1);
    }

    // Teste 2: Copiar para o mesmo endereço (deve retornar o ponteiro original)
    char src2[] = "world";
    char dest2[6] = "world";
    void *result2 = ft_memcpy(dest2, src2, 5);
    if (result2 == dest2) {
        printf("Teste 2 (Mesmo endereço): Passado\n");
    } else {
        printf("Teste 2 (Mesmo endereço): Falhou. Esperado: %p, Obtido: %p\n", dest2, result2);
    }

    // Teste 3: Copiar uma string vazia
    char src3[] = "";
    char dest3[6];
    void *result3 = ft_memcpy(dest3, src3, 0);
    if (memcmp(dest3, "", 0) == 0) {
        printf("Teste 3 (String vazia): Passado\n");
    } else {
        printf("Teste 3 (String vazia): Falhou. Esperado: '', Obtido: %s\n", dest3);
    }

    // Teste 4: Copiar um número limitado de bytes
    char src4[] = "abcdefgh";
    char dest4[6];
    void *result4 = ft_memcpy(dest4, src4, 3);
    if (memcmp(dest4, "abc", 3) == 0) {
        printf("Teste 4 (Bytes limitados): Passado\n");
    } else {
        printf("Teste 4 (Bytes limitados): Falhou. Esperado: abc, Obtido: %s\n", dest4);
    }

     // Teste 5: Copiar de um endereço para outro com tamanho diferente
    char src5[] = "abcdef";
    char dest5[7];
    void *result5 = ft_memcpy(dest5, src5, 6);
    if (memcmp(dest5, "abcdef", 6) == 0) {
        printf("Teste 5 (Tamanho diferente): Passado\n");
    } else {
        printf("Teste 5 (Tamanho diferente): Falhou. Esperado: abcdef, Obtido: %s\n", dest5);
    }

    return 0;
}
*/