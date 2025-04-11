/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 16:51:49 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/10 11:16:17 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_strncmp(char *str1, char *str2, size_t n)
{
	while ((*str1 || *str2) && n > 0)
	{
		if (*str1 != *str2)
		{
			return ((unsigned char)*str1 - (unsigned char) *str2);
		}
		str1++;
		str2++;
		n--;
	}
	return (0);
}
/*
int main(void)
{
    // Teste 1: Strings iguais
    int result1 = ft_strncmp("hello", "hello", 5);
    if (result1 == 0)
        printf("Teste 1 (Strings iguais): Passado\n");
    else
        printf("Teste 1 (Strings iguais): Falhou, esperado: 0, obtido: %d\n", result1);

    // Teste 2: Strings diferentes no início
    int result2 = ft_strncmp("hello", "world", 5);
    if (result2 < 0)
        printf("Teste 2 (Diferentes no inicio): Passado\n");
    else
        printf("Teste 2 (Diferentes no inicio): Falhou, esperado: negativo, obtido: %d\n", result2);

    // Teste 3: Strings diferentes com n menor que o comprimento das strings
    int result3 = ft_strncmp("hello", "world", 3);
    if (result3 < 0)
        printf("Teste 3 (Diferentes, n pequeno): Passado\n");
    else
        printf("Teste 3 (Diferentes, n pequeno): Falhou, esperado: negativo, obtido: %d\n", result3);

    // Teste 4: Strings com um comprimento diferente e n igual ao menor comprimento
    int result4 = ft_strncmp("hello", "worldx", 5);
    if (result4 < 0)
        printf("Teste 4 (Comprimentos diferentes, n pequeno): Passado\n");
    else
        printf("Teste 4 (Comprimentos diferentes, n pequeno): Falhou, esperado: negativo, obtido: %d\n", result4);

    // Teste 5: Uma string vazia e a outra não
    int result5 = ft_strncmp("", "world", 5);
    if (result5 == 0)
        printf("Teste 5 (String vazia, outra nao): Passado\n");
    else
        printf("Teste 5 (String vazia, outra nao): Falhou, esperado: 0, obtido: %d\n", result5);

    // Teste 6: Ambas as strings vazias
    int result6 = ft_strncmp("", "", 0);
    if (result6 == 0)
        printf("Teste 6 (Ambas vazias): Passado\n");
    else
        printf("Teste 6 (Ambas vazias): Falhou, esperado: 0, obtido: %d\n", result6);

    // Teste 7: n = 0
    int result7 = ft_strncmp("hello", "world", 0);
    if (result7 == 0)
        printf("Teste 7 (n = 0): Passado\n");
    else
        printf("Teste 7 (n = 0): Falhou, esperado: 0, obtido: %d\n", result7);

    return 0;
}
*/