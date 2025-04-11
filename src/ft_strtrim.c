/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 14:53:33 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/10 15:16:38 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i > 0 && ft_strchr(set, s1[i - 1]))
		i--;
	return (ft_substr(s1, 0, i));
}
/*
int main(void)
{
    // Teste 1: String vazia
    char *result1 = ft_strtrim("", "abc");
    if (result1 == NULL)
        printf("Teste 1 (String vazia): Passado\n");
    else {
        printf("Teste 1 (String vazia): Falhou, obtido: %s\n", result1);
        free(result1); // Importante liberar a memória alocada por ft_substr
    }

    // Teste 2: String sem caracteres a serem removidos
    char *result2 = ft_strtrim("banana", "abc");
    if (strcmp(result2, "banana") == 0)
        printf("Teste 2 (Sem remoção): Passado\n");
    else {
        printf("Teste 2 (Sem remoção): Falhou, esperado: banana, obtido: %s\n", result2);
        free(result2); // Importante liberar a memória alocada por ft_substr
    }

    // Teste 3: String com caracteres a serem removidos no início e fim
    char *result3 = ft_strtrim("  banana  ", " ");
    if (strcmp(result3, "banana") == 0)
        printf("Teste 3 (Início e Fim): Passado\n");
    else {
        printf("Teste 3 (Início e Fim): Falhou, esperado: banana, obtido: %s\n", result3);
        free(result3); // Importante liberar a memória alocada por ft_substr
    }

    // Teste 4: String com caracteres a serem removidos apenas no início
    char *result4 = ft_strtrim("   banana", " ");
    if (strcmp(result4, "banana") == 0)
        printf("Teste 4 (Apenas Início): Passado\n");
    else {
        printf("Teste 4 (Apenas Início): Falhou, esperado: banana, obtido: %s\n", result4);
        free(result4); // Importante liberar a memória alocada por ft_substr
    }

    // Teste 5: String com caracteres a serem removidos apenas no fim
    char *result5 = ft_strtrim("banana   ", " ");
    if (strcmp(result5, "banana") == 0)
        printf("Teste 5 (Apenas Fim): Passado\n");
    else {
        printf("Teste 5 (Apenas Fim): Falhou, esperado: banana, obtido: %s\n", result5);
        free(result5); // Importante liberar a memória alocada por ft_substr
    }

    // Teste 6: String com múltiplos caracteres para remover
    char *result6 = ft_strtrim("abcbananaabc", "abc");
    if (strcmp(result6, "banana") == 0)
        printf("Teste 6 (Múltiplos Caracteres): Passado\n");
    else {
        printf("Teste 6 (Múltiplos Caracteres): Falhou, esperado: banana, obtido: %s\n", result6);
        free(result6); // Importante liberar a memória alocada por ft_substr
    }

    // Teste 7: String com caracteres para remover que não estão na string
    char *result7 = ft_strtrim("banana", "xyz");
    if (strcmp(result7, "banana") == 0)
        printf("Teste 7 (Caracteres inexistentes): Passado\n");
    else {
        printf("Teste 7 (Caracteres inexistentes): Falhou, esperado: banana, obtido: %s\n", result7);
        free(result7); // Importante liberar a memória alocada por ft_substr
    }

    // Teste 8: set é NULL
    char *result8 = ft_strtrim("banana", NULL);
    if (result8 == NULL) {
        printf("Teste 8 (set NULL): Passado\n");
    } else {
        printf("Teste 8 (set NULL): Falhou, obtido: %s\n", result8);
        free(result8); // Importante liberar a memória alocada por ft_substr
    }

    return 0;
}
*/