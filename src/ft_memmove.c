/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 11:46:15 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/09 12:43:37 by vde-maga         ###   ########.fr       */
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
int main(void) {
    // Teste 1: Dest e src são iguais
    char str[] = "hello";
    char *result1 = ft_memmove(str, str, 5);
    if (result1 == str) {
        printf("Teste 1 (Dest == Src): Passado\n");
    } else {
        printf("Teste 1 (Dest == Src): Falhou\n");
    }

    // Teste 2: Dest > Src (sobreposição)
    char str2[] = "hello";
    char *result2 = ft_memmove(str2 + 2, str2, 5);
    if (strncmp(result2, "llo", 3) == 0) {
        printf("Teste 2 (Dest > Src): Passado\n");
    } else {
        printf("Teste 2 (Dest > Src): Falhou. Esperado: llo, Obtido: %s\n", result2);
    }

    // Teste 3: Dest < Src (sem sobreposição)
    char str3[] = "hello";
    char str4[6] = {0};
    char *result3 = ft_memmove(str4, str3, 5);
    if (strncmp(result3, "hello", 5) == 0) {
        printf("Teste 3 (Dest < Src): Passado\n");
    } else {
        printf("Teste 3 (Dest < Src): Falhou. Esperado: hello, Obtido: %s\n", result3);
    }

    // Teste 4: n = 0
    char str5[] = "hello";
    char str6[6] = {0};
    char *result4 = ft_memmove(str6, str5, 0);
    if (result4 == str6) {
        printf("Teste 4 (n = 0): Passado\n");
    } else {
        printf("Teste 4 (n = 0): Falhou\n");
    }

    // Teste 5: n maior que o tamanho da string
    char str7[] = "hello";
    char str8[10] = {0};
    char *result5 = ft_memmove(str8, str7, 10);
    if (strncmp(result5, "hello", 5) == 0) {
        printf("Teste 5 (n > tamanho): Passado\n");
    } else {
        printf("Teste 5 (n > tamanho): Falhou. Esperado: hello, Obtido: %s\n", result5);
    }

    return 0;
}
*/