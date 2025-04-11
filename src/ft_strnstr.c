/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 11:19:13 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/10 11:19:20 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>


char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	size_t	little_length;
	size_t	j;

	little_length = ft_strlen(little);
	if (little_length == 0 || big == little)
		return ((char *)big);
	if (n == 0)
		return (NULL);
	i = 0;
	while (big[i] && i < n)
	{
		j = 0;
		while (big[i + j] == little[j] && little[j] && (i + j) < n)
			j++;
		if (j == little_length)
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}
/*
int main(void) {
    // Teste 1: little é uma string vazia
    char *result1 = ft_strnstr("banana", "", 6);
    if (result1 == "banana") {
        printf("Teste 1 (little vazio): Passado\n");
    } else {
        printf("Teste 1 (little vazio): Falhou, esperado: banana, obtido: %s\n", result1);
    }

    // Teste 2: big e little são iguais
    char *result2 = ft_strnstr("banana", "banana", 6);
    if (result2 == "banana") {
        printf("Teste 2 (iguais): Passado\n");
    } else {
        printf("Teste 2 (iguais): Falhou, esperado: banana, obtido: %s\n", result2);
    }

    // Teste 3: little está no início de big
    char *result3 = ft_strnstr("banana", "ban", 6);
    if (result3 == "banana") {
        printf("Teste 3 (início): Passado\n");
    } else {
        printf("Teste 3 (início): Falhou, esperado: banana, obtido: %s\n", result3);
    }

    // Teste 4: little está no meio de big
    char *result4 = ft_strnstr("banana", "ana", 6);
    if (result4 == "banana" + 2) {
        printf("Teste 4 (meio): Passado\n");
    } else {
        printf("Teste 4 (meio): Falhou, esperado: banana+2, obtido: %s\n", result4);
    }

    // Teste 5: little está no fim de big (dentro do n)
    char *result5 = ft_strnstr("banana", "na", 6);
    if (result5 == "banana" + 4) {
        printf("Teste 5 (fim dentro de n): Passado\n");
    } else {
        printf("Teste 5 (fim dentro de n): Falhou, esperado: banana+4, obtido: %s\n", result5);
    }

    // Teste 6: little está no fim de big (fora do n)
    char *result6 = ft_strnstr("banana", "na", 3);
    if (result6 == NULL) {
        printf("Teste 6 (fim fora de n): Passado\n");
    } else {
        printf("Teste 6 (fim fora de n): Falhou, obtido: %s\n", result6);
    }

    // Teste 7: little não está em big
    char *result7 = ft_strnstr("banana", "xyz", 6);
    if (result7 == NULL) {
        printf("Teste 7 (não encontrado): Passado\n");
    } else {
        printf("Teste 7 (não encontrado): Falhou, obtido: %s\n", result7);
    }

    // Teste 8: n é zero
    char *result8 = ft_strnstr("banana", "ana", 0);
    if (result8 == NULL) {
        printf("Teste 8 (n=0): Passado\n");
    } else {
        printf("Teste 8 (n=0): Falhou, obtido: %s\n", result8);
    }

    // Teste 9: little é maior que n
    char *result9 = ft_strnstr("banana", "bananas", 3);
    if (result9 == NULL) {
        printf("Teste 9 (little > n): Passado\n");
    } else {
        printf("Teste 9 (little > n): Falhou, obtido: %s\n", result9);
    }

    return 0;
}
*/